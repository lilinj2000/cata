AUTOMAKE_OPTIONS = foreign

SUBDIRS = traderflow mdflow

TESTS = unittest.sh

check_PROGRAMS = unittest_md unittest_trader

unittest_md_SOURCES = \
	MDServiceImplTest.cc 

unittest_trader_SOURCES = \
	TraderServiceImplTest.cc


unittest_CPPFLAGS = -I$(top_srcdir) \
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(COVERAGE_CXXFLAGS)

unittest_md_CPPFLAGS = $(unittest_CPPFLAGS)

unittest_trader_CPPFLAGS = $(unittest_CPPFLAGS)

unittest_LDADD = \
	$(GTEST_LIBADD) \
	$(BOOST_LIBADD) \
	$(CTP_LIBADD) \
	$(SOIL_LIBADD) \
	$(COVERAGE_LDFLAGS)

unittest_md_LDADD = $(unittest_LDADD) \
	../md_service/libcata_md.la

unittest_trader_LDADD = $(unittest_LDADD) \
	../trader_service/libcata_trader.la


unittest_md_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread

unittest_trader_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread


# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh md.cfg trader.cfg


