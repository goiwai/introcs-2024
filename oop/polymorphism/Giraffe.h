#ifndef GIRAFFE_H_
#define GIRAFFE_H_

#include <iostream>
#include "Animal.h"

class Giraffe : public Animal {
  public:
    // constructor/copy constructor/destructor
    Giraffe(const std::string& species = "Giraffe", food_t favorite_food = leaf);
    ~Giraffe();
  public:
    void Eat(food_t food) const;
};

#endif // GIRAFFE_H_
