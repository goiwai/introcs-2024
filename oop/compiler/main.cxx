// include for std::cout
#include <iostream>

// include to use echo(), add()
// function prototypes are declared in prototypesdef.h
// prototypes is just specification, which gives:
//   function name
//   type of return
//   function arguments
// but not give the implementation.
// this enables compiling the program with -c option but not linking
#include "prototypesdef.h"

// Instead of including the header file above,
// these two lines also allow to use the function in the program
// extern void echo(const char* message);
// extern int add(int x, int y);

int main() {
  std::cout << "calling function echo()" << std::endl;
  echo("This is the function echo().");

  std::cout << "Calling the function add(1, 2): " << add(1, 2) << std::endl;

  return 0;
}
