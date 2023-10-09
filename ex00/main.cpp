#include "Zombie.hpp"

int main(void)
{
	Zombie *zName;

	std::cout << std::endl;
	zName = newZombie("Zaphod");
	zName->announce();
	randomChump("Fordy");
	
	delete zName;
	std::cout << std::endl;
	return (0);
}