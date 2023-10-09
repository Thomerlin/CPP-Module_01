#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {}

// Weapon::Weapon(const Weapon &other) : _type(other._type) {}

const std::string &Weapon::getType(void) const { return (this->_type); }

void Weapon::setType(std::string type) { this->_type = type; }