// include for std::cout
#include <iostream>

#include <cmath>
#include <cerrno>
#include <cstring>

int main() {
  // log function doesn't take negative value
  // thus it changes value of errno to some positive number
  std::log(-1);

  // check if value of errno same as value of EDOM i.e. 33
  if (errno != 0) {
    std::cout << "errno=" << errno << std::endl;
    std::cout << "std::strerror(errno)=" << std::strerror(errno) << std::endl;
  }

  return 0;
}
