#include <memory>

#include "gtest/gtest.h"
#include "utility/Log.hh"
#include "message/Message.hh"

namespace ctp
{

class MessageTest : public ::testing::Test
{
public:
  MessageTest()
  {
    ctp::Log::init("log.cfg");
  }

  void SetUp()
  {
  }

  void TearDown()
  {
  }

 protected:
};

TEST_F(MessageTest, createReqUserLoginFieldTest)
{

  std::auto_ptr<Message> req( Message::create(Message::REQUSERLOGINFIELDMESSAGE) );

  ASSERT_TRUE( req.get()!=NULL );
}


}  // namespace ctp
