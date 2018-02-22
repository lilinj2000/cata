AUTOMAKE_OPTIONS = foreign

SUBDIRS = 

# TESTS = unittest.sh

check_PROGRAMS = test_md test_trader

test_md_SOURCES = \
	md_service_test.cc

test_trader_SOURCES = \
	trader_service_test.cc


test_CPPFLAGS = -I$(top_srcdir) \
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(RAPIDJSON_CPPFLAGS) \
		$(FMT_CPPFLAGS) \
		$(SPDLOG_CPPFLAGS) \
		$(READERWRITERQUEUE_CPPFLAGS) \
		$(COVERAGE_CXXFLAGS)

test_md_CPPFLAGS = $(test_CPPFLAGS)

test_trader_CPPFLAGS = $(test_CPPFLAGS)

test_LDADD = \
	$(GTEST_LIBADD) \
	$(BOOST_LIBADD) \
	$(CTP_LIBADD) \
	$(SOIL_LIBADD) \
	$(FMT_LIBADD) \
	$(COVERAGE_LDFLAGS)

test_md_LDADD = $(test_LDADD) \
	../service/libcata_md.la

test_trader_LDADD = $(test_LDADD) \
	../service/libcata_trader.la


test_ldflags = $(LIBADD_DL) -Wl,--no-as-needed -pthread -lrt

test_md_LDFLAGS = $(test_ldflags)

test_trader_LDFLAGS = $(test_ldflags)


# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh md.json trader.json


