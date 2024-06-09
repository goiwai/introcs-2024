# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -Wall -pedantic -O2
ifeq ($(CXX), g++)
	CXXFLAGS += -ansi
endif
# CPPFLAGS = -DDEBUG

.PHONY: all clean

all: main.exe

# main.exe depends on:
#   main.o func1.o func2.o
# Recreate main.exe
# if either one of these dependencies are updated
# To create main.exe:
# 	the rule goes $(CXX)...
# 	Note: not include a TAB
main.exe: main.o func1.o func2.o
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ $^

# main.o depends on:
# 	main.cxx inc1.h
main.o: main.cxx inc1.h
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ -c main.cxx

# func1.o depends on:
#   func1.cpp inc1.h inc2.h
func1.o: func1.cpp inc1.h inc2.h
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ -c func1.cpp

# func2.o depends on:
# 	func2.cpp inc2.h inc3.h
func2.o: func2.cpp inc2.h inc3.h
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -I. -o $@ -c func2.cpp

clean:
	rm -f *~ *.o a.out core main.exe
