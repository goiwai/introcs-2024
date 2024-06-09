// include for std::cout
#include <iostream>

// determines various properties of the various variable types.
// limits the values of various variable types like char, int and long.
#include <climits>
// #include <limits.h>  // C Standard Library

// contains a set of various platform-dependent constants related to floating point values.
#include <cfloat>
// #include <float.h>   // C Standard Library

int main() {
  // Determined in <climits>
  std::cout << "(signed) int: " << INT_MIN << "~" << INT_MAX << std::endl;
  std::cout << "unsigned int: " << 0 << "~" << UINT_MAX << std::endl;
  std::cout << "(signed) short: " << SHRT_MIN << "~" << SHRT_MAX << std::endl;
  std::cout << "unsigned short: " << 0 << "~" << USHRT_MAX << std::endl;
  std::cout << "(signed) long: " << LONG_MIN << "~" << LONG_MAX << std::endl;
  std::cout << "unsigned long: " << 0 << "~" << ULONG_MAX << std::endl;

  // Determined in <cfloat>
  std::cout << "float: " << FLT_MIN << "~" << FLT_MAX << std::endl;
  std::cout << "double: " << DBL_MIN << "~" << DBL_MAX << std::endl;
  std::cout << "long double: " << LDBL_MIN << "~" << LDBL_MAX << std::endl;

  // Determined in <climits>
  std::cout << "(signed) char: " << CHAR_MIN << "~" << CHAR_MAX << std::endl;
  std::cout << "unsigned char: " << 0 << "~" << UCHAR_MAX << std::endl;

  return 0;
}
