AUTOMAKE_OPTIONS = foreign

SUBDIRS = 

TESTS = test_trader.sh

check_PROGRAMS = test_trader

test_trader_SOURCES = \
	TraderTest.cc 

test_trader_CPPFLAGS = -I$(top_srcdir) \
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(COVERAGE_CXXFLAGS)

test_trader_LDADD = \
	$(GTEST_LIBADD) \
	$(BOOST_LIBADD) \
	$(CTP_TRADER_LIBADD) \
	$(SOIL_LIBADD) \
	$(COVERAGE_LDFLAGS)

test_trader_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread


# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh log.cfg

