# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -std=c++11 -fPIC -Wall -pedantic -O2 
# CPPFLAGS += -DDEBUG

.PHONY: all clean

all: main.exe

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

ThreeVector.o: ThreeVector.cpp ThreeVector.h

%.o: %.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

main.o: main.cxx

%.exe:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

main.exe: main.o ThreeVector.o

clean:
	rm -f *~ *.o a.out core *.exe file.out
