#include "Zombie.hpp"
#include <stdlib.h>

void randomChump(std::string name)
{
	Zombie random = Zombie(name);

	random.announce();
	std::cout << "==================================" << std::endl;
}