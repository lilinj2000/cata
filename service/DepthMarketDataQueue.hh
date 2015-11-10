#ifndef CATA_DEPTH_MARKETDATA_QUEUE_HH
#define CATA_DEPTH_MARKETDATA_QUEUE_HH

#include <boost/thread.hpp>
#include <boost/thread/sync_queue.hpp>
#include <boost/scoped_ptr.hpp>

namespace cata
{

template<class ServiceCallback>
class DepthMarketDataQueue
{
 public:
  DepthMarketDataQueue(ServiceCallback* callback):
      callback_(callback)
  {
    data_thread_.reset(new boost::thread(&DepthMarketDataQueue::run, this));
  }
    
  virtual ~DepthMarketDataQueue()
  {
    depth_data_queue_.close();

    if( data_thread_.get() )
      data_thread_->join();
  }


  inline
  void pushData(DepthMarketData* data)
  {
    depth_data_queue_.push(data);
  }
  
 private:

  inline
  void run()
  {
    try
    {
      do
      {
        DepthMarketData* the_data = NULL;

        boost::queue_op_status res = depth_data_queue_.wait_pull(the_data);
        if( res==boost::queue_op_status::closed)
          break;

        std::unique_ptr<DepthMarketData> p_data(the_data);

        if( callback_ )
          callback_->onRtnMarketData( p_data.get() );
    
      }while(true);

    }
    catch(...)
    {
    }

  }
  
 private:
  boost::sync_queue<DepthMarketData*> depth_data_queue_;
  boost::scoped_ptr<boost::thread> data_thread_;

  ServiceCallback* callback_;
};

};  

#endif
