// include for std::cout
#include <iostream>
// determines various properties of the various variable types.
// limits the values of various variable types like char, int and long.
#include <climits>
// #include <limits.h>  // C standard library

// Do not assume long type has four bytes length
// it depends on the CPU architecture where the program runs
// To get the true size of types: use sizeof operator
int main() {
  std::cout << "sizeof(int*)=" << sizeof(int*) << " bytes=" << sizeof(int *) * CHAR_BIT << " bits" << std::endl;

  std::cout << "sizeof(int)=" << sizeof(int) << " bytes=" << sizeof(int) * CHAR_BIT << " bits" << std::endl;
  std::cout << "sizeof(unsigned int)=" << sizeof(unsigned int) << " bytes=" << sizeof(unsigned int) * CHAR_BIT << " bits" << std::endl;

  std::cout << "sizeof(short)=" << sizeof(short) << " bytes=" << sizeof(short) * CHAR_BIT << " bits" << std::endl;
  std::cout << "sizeof(unsigned short)=" << sizeof(unsigned short) << " bytes=" << sizeof(unsigned short) * CHAR_BIT << " bits" << std::endl;

  std::cout << "sizeof(long)=" << sizeof(long) << " bytes=" << sizeof(long) * CHAR_BIT << " bits" << std::endl;
  std::cout << "sizeof(unsigned long)=" << sizeof(unsigned long) << " bytes=" << sizeof(unsigned long) * CHAR_BIT << " bits" << std::endl;

  std::cout << "sizeof(float)=" << sizeof(float) << " bytes=" << sizeof(float) * CHAR_BIT << " bits" << std::endl;
  std::cout << "sizeof(double)=" << sizeof(double) << " bytes=" << sizeof(double) * CHAR_BIT << " bits" << std::endl;
  std::cout << "sizeof(long double)=" << sizeof(long double) << " bytes=" << sizeof(long double) * CHAR_BIT << " bits" << std::endl;

  std::cout << "sizeof(char)=" << sizeof(char) << " byte=" << sizeof(char) * CHAR_BIT << " bits" << std::endl;
  std::cout << "sizeof(unsigned char)=" << sizeof(unsigned char) << " byte=" << sizeof(unsigned char) * CHAR_BIT << " bits" << std::endl;

  return 0;
}
