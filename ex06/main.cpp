#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " LEVEL" << std::endl
				  << std::endl
				  << "Arguments" << std::endl
				  << "  LEVEL  One of DEBUG, INFO, WARNING, ERROR." << std::endl;
		return (1);
	}
	else
	{
		harl.complain(argv[1]);
	}
	return (0);
}