#include "Zombie.hpp"
#include <sstream>
#include <string>

int main(void)
{
	Zombie *horde;
	std::stringstream ss;

	std::cout << std::endl;
	for (int n = 0; n < 10; n++)
	{
		ss << n;
		horde = zombieHorde(n, "horde-" + ss.str());
		for (int i = 0; i < n; i++)
		{
			horde[i].announce();
		}
		std::cout <<  std::endl;
		ss.str(std::string());
		delete[] horde;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
	}
}