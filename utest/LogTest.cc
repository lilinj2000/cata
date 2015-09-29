#include <memory>

#include "gtest/gtest.h"
#include "utility/Log.hh"

namespace ctp
{

struct point
{
  float m_x, m_y;

  point() : m_x(0.0f), m_y(0.0f) {}
  point(float x, float y) : m_x(x), m_y(y) {}
};

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<< (std::basic_ostream< CharT, TraitsT >& strm, point const& p)
{
  strm << "(" << p.m_x << ", " << p.m_y << ")";
  return strm;
}

class LogTest : public ::testing::Test
{
public:
  LogTest()
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

TEST_F(LogTest, defaultLogTest)
{

  CTP_TRACE <<"This is a trace severity record" ;
  CTP_DEBUG <<"This is a debug severity record";
  
  CTP_INFO <<"This is a info severity record";
  CTP_WARNING <<"This is a warning severity record";
  CTP_ERROR <<"This is a error severity record";
  CTP_FATAL <<"This is a fatal severity record";

  point p(3.2, 4.5);
  CTP_INFO <<"info: " <<p;
  
  ASSERT_TRUE( true );
}


}  // namespace ctp
