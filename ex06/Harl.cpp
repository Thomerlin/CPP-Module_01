#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
	void (Harl::*handlers[4])(void);
	handlers[0] = &Harl::debug;
	handlers[1] = &Harl::info;
	handlers[2] = &Harl::warning;
	handlers[3] = &Harl::error;
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int logLevel;

	for (logLevel = 0; logLevel < 4; logLevel++)
	{
		if (str[logLevel] == level)
		{
			break;
		}
	}
	switch (logLevel)
	{
	case 0:
		(this->*handlers[0])();
		__attribute__((fallthrough));
	case 1:
		(this->*handlers[1])();
		__attribute__((fallthrough));
	case 2:
		(this->*handlers[2])();
		__attribute__((fallthrough));
	case 3:
		(this->*handlers[3])();
		break;
	default:
		std::cout << std::endl;
		std::cout << "----------------------------INVALID----------------------------" << std::endl;
		std::cout << "Input invalid! Choose a level between DEBUG, INFO, WARNING, and ERROR." << std::endl;
		std::cout << std::endl;
		break;
	}
}

void Harl::debug(void)
{
	std::cout << std::endl;
	std::cout << "----------------------------DEBUG----------------------------" << std::endl;
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << std::endl;
	std::cout << "----------------------------INFO----------------------------" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				 "didn’t put enough bacon in my burger! If you did, I wouldn’t "
				 "be asking for more!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << std::endl;
	std::cout << "----------------------------WARNING----------------------------" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
				 "coming for years whereas you started working here since last month."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << std::endl;
	std::cout << "----------------------------ERROR----------------------------" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
	std::cout << std::endl;
}
