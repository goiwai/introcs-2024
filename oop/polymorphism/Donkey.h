#ifndef DONKEY_H_
#define DONKEY_H_

#include <iostream>
#include "Animal.h"

class Donkey : public Animal {
  public:
    // constructor/copy constructor/destructor
    Donkey(const std::string &species = "Donkey", food_t favorite_food = straw);
    ~Donkey();
  public:
    void Eat(food_t food) const;
};

#endif // DONKEY_H_
