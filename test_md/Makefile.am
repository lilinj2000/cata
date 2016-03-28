AUTOMAKE_OPTIONS = foreign

SUBDIRS = 

TESTS = test_md.sh

check_PROGRAMS = test_md

test_md_SOURCES = \
	MDTest.cc 

test_md_CPPFLAGS = -I$(top_srcdir) \
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS) \
		$(COVERAGE_CXXFLAGS)

test_md_LDADD = \
	$(GTEST_LIBADD) \
	$(BOOST_LIBADD) \
	$(CTP_MD_LIBADD) \
	$(SOIL_LIBADD) \
	$(COVERAGE_LDFLAGS)

test_md_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread


# header files
noinst_HEADERS = 

EXTRA_DIST = env.sh

