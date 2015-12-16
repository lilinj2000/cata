AUTOMAKE_OPTIONS = foreign

lib_LTLIBRARIES = libcata.la
libcata_la_SOURCES = MDOptions.cc CataUtil.cc MDServiceImpl.cc \
		MDSpiImpl.cc \
		TraderOptions.cc TraderSpiImpl.cc \
		TraderServiceImpl.cc

libcata_la_CPPFLAGS = -I$(top_srcdir) \
			$(BOOST_CPPFLAGS) \
			$(CTP_CPPFLAGS) \
			$(SOIL_CPPFLAGS)

libcata_la_LIBADD = $(CTP_LIBADD) \
		$(BOOST_LIBADD) \
		$(SOIL_LIBADD)

libcata_la_LDFLAGS = \
	-no-undefined -version-info \
	$(LT_CURRENT):$(LT_REVISION):$(LT_AGE) \
	-release $(LT_RELEASE)

# header files
noinst_HEADERS = MDOptions.hh MDServiceImpl.hh \
	MDSpiImpl.hh \
	TraderOptions.hh \
	TraderServiceImpl.hh \
	TraderSpiImpl.hh \
	CataLog.hh \
	CataUtil.hh \
	ThostFtdcUserApiStructPrint.hh


