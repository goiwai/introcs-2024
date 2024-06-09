#include <iostream>

// include to use the sleep
#ifndef WIN32
#include <unistd.h>
#else
#include <stdlib.h>
#define sleep(sec) _sleep(sec*1000)
#endif

const char* VERSION = "1.0.1";
void process();

int main() {
  // print the version number
  std::cout << "VERSION NUMBER: " << VERSION << std::endl;
  // pseudo process below
  process();
  return 0;
}

void process() {
  std::cout << "PROCESS START IN FUNCTION" << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << "." << std::flush;
  sleep(1);
  std::cout << " DONE!" << std::endl;
  return;
}
