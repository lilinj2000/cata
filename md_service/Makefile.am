AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libcata_md.la
libcata_md_la_SOURCES = MDOptions.cc \
		MDSpiImpl.cc \
		MDServiceImpl.cc \
		Log.cc

libcata_md_la_CPPFLAGS = -I$(top_srcdir) \
			$(BOOST_CPPFLAGS) \
			$(CTP_CPPFLAGS) \
			$(SOIL_CPPFLAGS) \
			$(RAPIDJSON_CPPFLAGS) \
			$(FMT_CPPFLAGS) \
			$(SPDLOG_CPPFLAGS) \
			$(COVERAGE_CXXFLAGS)

libcata_md_la_LIBADD = $(CTP_MD_LIBADD) \
		$(BOOST_LIBADD) \
		$(SOIL_LIBADD) \
		$(FMT_LIBADD) \
		$(COVERAGE_LDFLAGS)

libcata_md_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

# header files
noinst_HEADERS = MDOptions.hh MDServiceImpl.hh \
	MDSpiImpl.hh \
	MDUtil.hh MDLog.hh


