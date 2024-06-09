// include for std::cout
#include <iostream>

int main() {
  // Determine the Signal type here
  // The Signal variable accepts only the red, blue, yellow, and black,
  // where 0, 1, 2, and -1, respectively.
  typedef enum {
    green,
    yellow,
    red,
    black = -1
  } Signal;

  Signal go = green;
  Signal caution = yellow;
  Signal not_go = red;
  Signal not_work = black;

  // Disallowed these two expressions:
  // Signal signal = 1;
  // Signal signal = purple;

  std::cout << "go=" << go << std::endl;
  std::cout << "caution=" << caution << std::endl;
  std::cout << "not_go=" << not_go << std::endl;
  std::cout << "not_work=" << not_work << std::endl;
  std::cout << "sizeof(Signal)=" << sizeof(Signal) << " bytes" << std::endl;

  // Determine the alias name for the existing type
  typedef double Weight;
  Weight my_weight = 123.456789;
  std::cout << "my_weight=" << my_weight << std::endl;
  std::cout << "sizeof(Weight)=" << sizeof(Weight) << " bytes" << std::endl;
  
  return 0;
}
