#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << std::endl << "Addresses:" << std::endl
		<< "string:------------------" << &string << std::endl
		<< "stringPTR (Pointer):-----" << stringPTR << std::endl
		<< "stringREF (Reference):---" << &stringREF << std::endl
		<< std::endl
		<< "Values:" << std::endl
		<< "string:------------------" << string << std::endl
		<< "stringPTR (Pointer):-----" << *stringPTR << std::endl
		<< "stringREF (Reference):---" << stringREF << std::endl
		<< std::endl;
  return (0);
}