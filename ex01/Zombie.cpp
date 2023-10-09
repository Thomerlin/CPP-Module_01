#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

void Zombie::setZombieName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " : Zombie Killed (destroyed)." << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}