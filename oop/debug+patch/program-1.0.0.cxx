#include <iostream>

const char* VERSION = "1.0.0";
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
  std::cout << "." << std::flush;
  std::cout << "." << std::flush;
  std::cout << "." << std::flush;
  std::cout << " DONE!" << std::endl;
  return;
}
