#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>
#include <string>

#ifdef DEBUG
#define MYDEBUG                                           \
  std::cerr << __PRETTY_FUNCTION__                        \
            << " [" << __FILE__ << ":" << __LINE__ << "]" \
            << " (Built at " << __TIME__                  \
            << " on " << __DATE__ << ")" << std::endl;
#else
#define MYDEBUG
#endif

typedef enum {
  meat,
  fruits,
  straw,
  fish,
  vegetable,
  leaf
} food_t;
class Animal {
  public:
    // constructor/copy constructor/destructor
    Animal(const std::string &species, food_t favorite_food);
    virtual ~Animal();
  public:
    // set/get methods and utilities
    const std::string &GetSpecies() const {
      return species_;
    }
    const food_t GetFavoriteFood() const {
      return favorite_food_;
    }
    const std::string FoodAsString(food_t food) const {
      const char* enum_to_string[] = {
        "meat",
        "fruits",
        "straw",
        "fish",
        "vegetable",
        "leaf"
      };
      return std::string(enum_to_string[food]);
    }
    const std::string FavoriteFoodAsString() const {
      return FoodAsString(favorite_food_);
    }
  public:
    virtual void Eat(food_t food) const = 0;
  protected:
    // data members
    std::string species_;
    food_t favorite_food_;
};

#endif // ANIMAL_H_
