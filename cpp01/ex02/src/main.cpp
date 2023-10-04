#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String address memmory: " << &str << std::endl;
	std::cout << "address memmory held by StringPTR: " << stringPTR << std::endl;
	std::cout << "address memmory held by StringREF: " << &stringREF << std::endl;
	std::cout << "String value: " << str << std::endl;
	std::cout << "StringPTR value: " << *stringPTR << std::endl;
	std::cout << "StringREF value: " << stringREF << std::endl;
}