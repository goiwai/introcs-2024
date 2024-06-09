#include "Zoo.h"

Zoo::Zoo(const std::string &zoo_name, int number_of_cages)
  : zoo_name_(zoo_name),
    // number_of_cages_(number_of_cages),
    // number_of_animals_(0),
    cage_list_()
{
  MYDEBUG;
  // animals_ = new Animal*[number_of_cages_];
}

Zoo::~Zoo() {
  MYDEBUG;
  // for (int i = 0; i < number_of_animals_; i++) {
  //   std::cout << "Deleting " << animals_[i]->GetSpecies() << " in the cage: " << i << std::endl;
  //   delete animals_[i];
  // }
  // delete [] animals_;
}

void Zoo::MoveIn(Animal* animal) {
  MYDEBUG;
  cage_list_.push_back(Cage(animal));
  // if (number_of_animals_ >= number_of_cages_) {
  //   number_of_cages_ *= 2;
  //   Animal** expanded = new Animal*[number_of_cages_];
  //   for (int i = 0; i < number_of_animals_; i++) {
  //     expanded[i] = animals_[i];
  //   }
  //   delete [] animals_;
  //   animals_ = expanded;
  // }
  // animals_[number_of_animals_] = animal;
  // number_of_animals_++;
  return;
}

void Zoo::Feed(food_t food, int id) {
  MYDEBUG;
  if (id < 0) {
    for (auto i = 0; i < cage_list_.size(); i++) {
      cage_list_[i]->Eat(food);
    }
  } else if (id < cage_list_.size()) {
    cage_list_[id]->Eat(food);
  }
  return;
}
