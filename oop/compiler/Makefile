# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -Wall -pedantic -O2
ifeq ($(CXX), g++)
	CXXFLAGS += -ansi
endif
# CPPFLAGS = -DDEBUG

.PHONY: all clean

all: hello.exe main.exe \
	staticmain.exe sharedmain.exe

hello.exe: hello.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

main.exe: add.o echo.o main.o
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ $^

main.o: main.cxx prototypesdef.h
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ -c $<

add.o: add.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ -c $<

echo.o: echo.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ -c $<

libstaticlib.a: add.o echo.o
	$(AR) rv $@ $^

staticmain.exe: main.o libstaticlib.a
	g++ -I. -o $@ $< -L. -lstaticlib

pic-add.o: add.cpp
	$(CXX) $(CXXFLAGS) -fPIC $(CPPFLAGS) -I. -o $@ -c $<

pic-echo.o: echo.cpp
	$(CXX) $(CXXFLAGS) -fPIC $(CPPFLAGS) -I. -o $@ -c $<

pic-main.o: main.cxx prototypesdef.h
	$(CXX) $(CXXFLAGS) -fPIC $(CPPFLAGS) -I. -o $@ -c $<

libsharedlib.so: pic-add.o pic-echo.o
	$(CXX) $(CXXFLAGS) -shared -fPIC $(CPPFLAGS) -o $@ $^

sharedmain.exe: pic-main.o libsharedlib.so
	$(CXX) -I. -o $@ $< -L. -lsharedlib

clean:
	rm -f *~ *.o a.out core hello.exe main.exe staticmain.exe sharedmain.exe libstaticlib.a libsharedlib.so
