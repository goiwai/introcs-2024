#ifndef TIGER_H_
#define TIGER_H_

#include <iostream>
#include "Animal.h"

class Tiger : public Animal {
  public:
    // constructor/copy constructor/destructor
    Tiger(const std::string& species = "Tiger", food_t favorite_food = meat);
    ~Tiger();
  public:
    void Eat(food_t food) const;
};

#endif // TIGER_H_
