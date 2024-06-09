# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -std=c++11 -fPIC -Wall -pedantic -O2 
# CPPFLAGS += -DDEBUG

.PHONY: all clean

all: main.exe

%.o: %.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

main.o: main.cxx Zoo.h Animal.h Donkey.h Giraffe.h Tiger.h

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

Zoo.o: Zoo.cpp Zoo.h Animal.h
Animal.o: Animal.cpp Animal.h
Tiger.o: Tiger.cpp Tiger.h Animal.h
Donkey.o: Donkey.cpp Donkey.h Animal.h
Giraffe.o: Giraffe.cpp Giraffe.h Animal.h

%.exe:
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

main.exe: main.o Zoo.o Animal.o Tiger.o Donkey.o Giraffe.o

clean:
	rm -f *~ *.o a.out core *.exe
