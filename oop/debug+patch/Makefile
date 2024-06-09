# CXXFLAGS := $(CXXFLAGS) -march=pentium
# enables self-referencing like above:
CXXFLAGS = -Wall -pedantic -O2
ifeq ($(CXX), g++)
	CXXFLAGS += -ansi
endif
# CPPFLAGS = -DDEBUG

.PHONY: all clean

all: debug.exe none-debug.exe program-1.0.0.exe program-1.0.1.exe

debug.exe: debug.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -DDEBUG -o $@ $^

none-debug.exe: debug.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

program-1.0.0.exe: program-1.0.0.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

program-1.0.1.exe: program-1.0.1.cxx
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

clean:
	rm -f *~ *.o a.out core debug.exe none-debug.exe program-1.0.0.exe program-1.0.1.exe
