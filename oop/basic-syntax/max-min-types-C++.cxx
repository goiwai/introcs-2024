// include for std::cout
#include <iostream>
// The header is part of the type support library.
// where numeric_limits a class template is defined.
// numeric_limits provides an interface to query properties of all fundamental numeric types.
#include <limits>

int main() {
  std::cout << "(signed) int: " << std::numeric_limits<int>::min() << "~" << std::numeric_limits<int>::max() << std::endl;
  std::cout << "unsigned int: " << std::numeric_limits<unsigned int>::min() << "~" << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << "(signed) short: " << std::numeric_limits<short>::min() << "~" << std::numeric_limits<short>::max() << std::endl;
  std::cout << "unsigned short: " << std::numeric_limits<unsigned short>::min() << "~" << std::numeric_limits<unsigned short>::max() << std::endl;
  std::cout << "(signed) long: " << std::numeric_limits<long>::min() << "~" << std::numeric_limits<long>::max() << std::endl;
  std::cout << "unsigned long: " << std::numeric_limits<unsigned long>::min() << "~" << std::numeric_limits<unsigned long>::max() << std::endl;

  std::cout << "float: " << std::numeric_limits<float>::min() << "~" << std::numeric_limits<float>::max() << std::endl;
  std::cout << "double: " << std::numeric_limits<double>::min() << "~" << std::numeric_limits<double>::max() << std::endl;
  std::cout << "long double: " << std::numeric_limits<long double>::min() << "~" << std::numeric_limits<long double>::max() << std::endl;

  std::cout << "(signed) char: " << static_cast<int>(std::numeric_limits<char>::min()) << "~" << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;
  std::cout << "unsigned char: " << static_cast<int>(std::numeric_limits<unsigned char>::min()) << "~" << static_cast<int>(std::numeric_limits<unsigned char>::max()) << std::endl;

  return 0;
}
