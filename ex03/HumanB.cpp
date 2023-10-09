#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::string means;

	means = this->_weapon != NULL ? this->_weapon->getType() : "fists";
	std::cout << this->_name << " attacks with their " << means << std::endl;
}
