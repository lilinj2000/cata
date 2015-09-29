AUTOMAKE_OPTIONS = foreign

noinst_PROGRAMS = unittest

# ConfigTest.cc 
# LogTest.cc  
# FtdcUserApiStructPrintTest.cc 


unittest_SOURCES = \
	MDServiceImplTest.cc \
	TraderServiceImplTest.cc


unittest_CPPFLAGS = -I$(top_srcdir) -I.. -I..\
		$(BOOST_CPPFLAGS) \
		$(CTP_CPPFLAGS) \
		$(GTEST_CPPFLAGS) \
		$(SOIL_CPPFLAGS)


unittest_LDADD = \
	$(GTEST_LIBADD) \
	../service/libcata.la \
	$(BOOST_LIBADD) \
	$(CTP_LIBADD) \
	$(SOIL_LIBADD)



unittest_LDFLAGS = $(LIBADD_DL) -Wl,--no-as-needed -pthread

# header files
noinst_HEADERS = 


