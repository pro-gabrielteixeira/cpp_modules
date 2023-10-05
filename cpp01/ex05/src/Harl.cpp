#include "../includes/Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn'tput enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	int i = 0;
	std::string	words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*callFunc[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (; i < 4 && (words[i].compare(0, words[i].size(),level) != 0); i++) {}
	if (i < 4)
		(this->*callFunc[i])();
}

Harl::Harl(void)
{
}

Harl::~Harl()
{
}





