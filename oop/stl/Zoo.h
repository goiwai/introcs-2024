#ifndef ZOO_H_
#define ZOO_H_

#include <string>
#include <memory>
#include <vector>

#include "Animal.h"

class Animal;

// typedef std::unique_ptr<Animal> Cage;
typedef std::shared_ptr<Animal> Cage;
typedef std::vector<Cage> CageList;

class Zoo {
  public:
    // constructor/copy constructor/destructor
    Zoo(const std::string &zoo_name, int number_of_cages = 10);
    ~Zoo();

  public:
    // set/get methods and utilities
    void MoveIn(Animal* animal);
    void Feed(food_t food, int id = -1);
    const CageList& GetCageList() const {
      return cage_list_;
    }
    const Cage& GetCage(int index) const {
      return cage_list_[index];
    }

  private:
    // data members
    std::string zoo_name_;
    // int number_of_cages_;
    // int number_of_animals_;
    CageList cage_list_;
};

#endif // ZOO_H_
