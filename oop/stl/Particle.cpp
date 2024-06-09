#include "Particle.h"

Particle::Particle()
  : name_("pseudo"), mass_(0.0), position_(ThreeVector()), momentum_(ThreeVector()) {
  MYDEBUG;
}

Particle::Particle(const std::string &name, double mass, const ThreeVector &pos, const ThreeVector &mom)
  : name_(name), mass_(mass), position_(pos), momentum_(mom) {
  MYDEBUG;
}

Particle::~Particle() {
  MYDEBUG;
}

Particle::Particle(const Particle &p)
  : name_(p.name_), mass_(p.mass_), position_(p.position_), momentum_(p.momentum_) {
  MYDEBUG;
}

const Particle& Particle::operator=(const Particle& p) {
  MYDEBUG;
  name_ = p.name_;
  mass_ = p.mass_;
  position_ = p.position_;
  momentum_ = p.momentum_;
  return *this;
}
