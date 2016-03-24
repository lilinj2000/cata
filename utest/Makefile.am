AUTOMAKE_OPTIONS = foreign

SUBDIRS = traderflow mdflow

TESTS = unittest.sh

check_PROGRAMS = unittest

unittest_SOURCES = \
	MDServiceImplTest.cc \
	TraderServiceImplTest.cc


unittest_CPPFLAGS = -I$(top_srcdir) -I.. -I..\
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(COVERAGE_CXXFLAGS)


unittest_LDADD = \
	$(GTEST_LIBADD) \
	../service/libcata.la \
	$(BOOST_LIBADD) \
	$(CTP_LIBADD) \
	$(SOIL_LIBADD) \
	$(COVERAGE_LDFLAGS)



unittest_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread

# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh


