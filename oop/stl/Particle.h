#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <string>
#include "ThreeVector.h"

class Particle {
  public:
    // constructors
    Particle();
    Particle(const std::string &name, double mass, const ThreeVector &pos = ThreeVector(), const ThreeVector &mom = ThreeVector());
    // copy constructor
    Particle(const Particle &p);
    // destructor
    ~Particle();

  public:
    // assignment/comparison operators
    const Particle& operator=(const Particle& p);
    bool operator==(const Particle& p) const {
      return (name_ == p.name_);
    }
    bool operator!=(const Particle& p) const {
      return (name_ != p.name_);
    }

  public:
    // set/get methods and utilities
    const std::string& GetName() const {
      return name_;
    }
    double GetMass() const {
      return mass_;
    }
    const ThreeVector& GetPosition() const {
      return position_;
    }
    const ThreeVector& GetMomentum() const {
      return momentum_;
    }

  protected:
    // data members
    std::string name_;
    double mass_;
    ThreeVector position_;
    ThreeVector momentum_;
};

#endif // PARTICLE_H_
