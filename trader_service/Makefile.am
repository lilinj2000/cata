AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libcata_trader.la
libcata_trader_la_SOURCES = \
		TraderOptions.cc TraderSpiImpl.cc \
		TraderServiceImpl.cc

libcata_trader_la_CPPFLAGS = -I$(top_srcdir) \
			$(BOOST_CPPFLAGS) \
			$(CTP_CPPFLAGS) \
			$(SOIL_CPPFLAGS) \
			$(RAPIDJSON_CPPFLAGS) \
			$(JSON_CPPFLAGS) \
			$(COVERAGE_CXXFLAGS)

libcata_trader_la_LIBADD = $(CTP_TRADER_LIBADD) \
		$(BOOST_LIBADD) \
		$(SOIL_LIBADD) \
		$(JSON_LIBADD) \
		$(COVERAGE_LDFLAGS)

libcata_trader_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

# header files
noinst_HEADERS = \
	TraderOptions.hh \
	TraderServiceImpl.hh \
	TraderSpiImpl.hh



