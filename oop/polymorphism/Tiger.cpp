#include "Tiger.h"

Tiger::Tiger(const std::string &species, food_t favorite_food)
  : Animal(species, favorite_food) {
  MYDEBUG;
}

Tiger::~Tiger() {
  MYDEBUG;
}

void Tiger::Eat(food_t food) const {
  MYDEBUG;
  if (favorite_food_ == food) {
    std::cout << species_ << " ate \"" << FoodAsString(food) << "\". "
              << species_ << " looks happy." << std::endl;
  } else {
    std::cerr << species_ << " didn't eat \"" << FoodAsString(food) << "\". "
              << species_ << "'s favorite food is \"" << FoodAsString(favorite_food_) << "\"." << std::endl;
  }
  return;
}
