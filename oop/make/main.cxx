// main.cpp depends on inc1.h
#include "inc1.h"

#ifndef WIN32
extern "C++" {
#endif
  // main.exe depends on compiled function func1()
  // in which is stored func1.o
  void func1();
  // main.exe depends on compiled function func2()
  void func2();
#ifndef WIN32
}
#endif

int main() {
  func1();
  func2();
  return 0;
}
