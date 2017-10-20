AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = \
	libcata_md.la \
	libcata_trader.la

libcata_md_la_SOURCES = \
	MDOptions.cc \
	MDSpiImpl.cc \
	MDServiceImpl.cc

libcata_trader_la_SOURCES = \
	TraderOptions.cc \
	TraderSpiImpl.cc \
	TraderServiceImpl.cc


libcata_la_CPPFLAGS = \
	-I$(top_srcdir) \
	$(BOOST_CPPFLAGS) \
	$(CTP_CPPFLAGS) \
	$(SOIL_CPPFLAGS) \
	$(RAPIDJSON_CPPFLAGS) \
	$(FMT_CPPFLAGS) \
	$(SPDLOG_CPPFLAGS) \
	$(COVERAGE_CXXFLAGS)

libcata_md_la_CPPFLAGS = $(libcata_la_CPPFLAGS)

libcata_trader_la_CPPFLAGS = $(libcata_la_CPPFLAGS)

libcata_la_LIBADD = \
	$(BOOST_LIBADD) \
	$(SOIL_LIBADD) \
	$(FMT_LIBADD) \
	$(COVERAGE_LDFLAGS)

libcata_md_la_LIBADD = \
	$(libcata_la_LIBADD) \
	$(CTP_MD_LIBADD)

libcata_trader_la_LIBADD = \
	$(libcata_la_LIBADD) \
	$(CTP_TRADER_LIBADD)

libcata_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

libcata_md_la_LDFLAGS = $(libcata_la_LDFLAGS)
libcata_trader_la_LDFLAGS = $(libcata_la_LDFLAGS)

# header files
noinst_HEADERS = \
	Helper.hh \
	MDOptions.hh \
	MDSpiImpl.hh \
	MDServiceImpl.hh \
	MdApiFactory.hh \
	TraderOptions.hh \
	TraderSpiImpl.hh \
	TraderServiceImpl.hh
