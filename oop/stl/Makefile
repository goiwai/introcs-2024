# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -fPIC -Wall -pedantic -O2 
# CPPFLAGS += -DDEBUG

ifeq ($(CXX), g++)
  CXXVERSION = $(shell g++ --version | grep '^g++' | awk '{print $$3}' | sed 's/\.//g')
  ifeq ($(shell test $(CXXVERSION) -lt 800; echo $$?), 0)
    $(warning Version 8 or later of GCC is required to build some C++17-enabled programs. Since CentOS7 build-in GCC is version 4.8, we need to have extra work for installing the C++17 supported compiler. To use the prebuilt version of GCC, run like `module load gcc/830` before `make`.)
  endif
endif

.PHONY: all clean

all: calc-tmpl-main.exe \
	particle-table.exe \
	dict-particle-mass-c++98.exe \
	dict-particle-mass-c++11.exe \
	dict-particle-mass-c++17.exe \
	smart-pointer-example.exe

%.o: %.cxx
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

calc-tmpl-main.o: calc-tmpl-main.cxx ThreeVector.h CalculatorT.h CalculatorT.tpp
particle-table.o: particle-table.cxx Particle.h unit.h
smart-pointer-example.o: smart-pointer-example.cxx Zoo.h Animal.h Donkey.h Giraffe.h Tiger.h

%.o: %.cpp
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

ThreeVector.o: ThreeVector.cpp ThreeVector.h
Particle.o: Particle.cpp Particle.h ThreeVector.h
Zoo.o: Zoo.cpp Zoo.h Animal.h
Animal.o: Animal.cpp Animal.h
Tiger.o: Tiger.cpp Tiger.h Animal.h
Donkey.o: Donkey.cpp Donkey.h Animal.h
Giraffe.o: Giraffe.cpp Giraffe.h Animal.h

%.exe:
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

calc-tmpl-main.exe: calc-tmpl-main.o ThreeVector.o
particle-table.exe: particle-table.o Particle.o ThreeVector.o
smart-pointer-example.exe: smart-pointer-example.o Zoo.o Animal.o Tiger.o Donkey.o Giraffe.o

dict-particle-mass-c++98.exe: dict-particle-mass.cxx unit.h
	$(CXX) -std=c++98 -DCXXSTD=98 -ansi $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<
dict-particle-mass-c++11.exe: dict-particle-mass.cxx unit.h
	$(CXX) -std=c++11 -DCXXSTD=11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<
# For GCC, required gcc-c++ 7.1 or later
dict-particle-mass-c++17.exe: dict-particle-mass.cxx unit.h
	$(CXX) -std=c++17 -DCXXSTD=17 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f *~ *.o a.out core *.exe
