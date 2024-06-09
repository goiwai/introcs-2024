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

all: 	file-main-c++11.exe file-main-c++17.exe \
	variable-arguments-main.exe

%.o: %.cxx
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

file-main.o: file-main.cxx

%.o: %.cpp
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

File-c++11.o: File.cpp File.h
	$(CXX) -std=c++11 -DCXXSTD=11 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<
File-c++17.o: File.cpp File.h
	$(CXX) -std=c++17 -DCXXSTD=17 $(CXXFLAGS) $(CPPFLAGS) -c -o $@ $<

%.exe:
	$(CXX) -std=c++11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

variable-arguments-main.exe: variable-arguments-main.cxx

# For GCC, required gcc-c++ 7.1 or later
file-main-c++11.exe: file-main.o File-c++11.o
	$(CXX) -std=c++11 -DCXXSTD=11 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^
# For GCC, required gcc-c++ 7.1 or later
file-main-c++17.exe: file-main.o File-c++17.o
	$(CXX) -std=c++17 -DCXXSTD=17 $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f *~ *.o a.out core *.exe
