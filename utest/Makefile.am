AUTOMAKE_OPTIONS = foreign

SUBDIRS = traderflow mdflow

# TESTS = unittest.sh

check_PROGRAMS = unittest_md unittest_trader

unittest_md_SOURCES = \
	MDServiceTest.cc \
	MessageTest.cc \
	MDServiceImplTest.cc

unittest_trader_SOURCES = \
	TraderServiceTest.cc


unittest_CPPFLAGS = -I$(top_srcdir) \
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(RAPIDJSON_CPPFLAGS) \
		$(FMT_CPPFLAGS) \
		$(SPDLOG_CPPFLAGS) \
		$(COVERAGE_CXXFLAGS)

unittest_md_CPPFLAGS = $(unittest_CPPFLAGS)

unittest_trader_CPPFLAGS = $(unittest_CPPFLAGS)

unittest_LDADD = \
	$(GTEST_LIBADD) \
	$(BOOST_LIBADD) \
	$(CTP_LIBADD) \
	$(SOIL_LIBADD) \
	$(FMT_LIBADD) \
	$(COVERAGE_LDFLAGS)

unittest_md_LDADD = $(unittest_LDADD) \
	../service/libcata_md.la

unittest_trader_LDADD = $(unittest_LDADD) \
	../service/libcata_trader.la


unittest_ldflags = $(LIBADD_DL) -Wl,--no-as-needed -pthread

unittest_md_LDFLAGS = $(unittest_ldflags)

unittest_trader_LDFLAGS = $(unittest_ldflags)


# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh md.json trader.json


