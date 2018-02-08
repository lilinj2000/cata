AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = \
	libcata_md.la \
	libcata_trader.la

libcata_md_la_SOURCES = \
	md_options.cc \
	md_spi_impl.cc \
	md_service_impl.cc

libcata_trader_la_SOURCES = \
	trader_options.cc \
	trader_spi_impl.cc \
	trader_service_impl.cc


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
	helper.h \
	md_options.h \
	md_spi_impl.h \
	md_service_impl.h \
	md_api_factory.h \
	trader_options.h \
	trader_spi_impl.h \
	trader_service_impl.h
