#include "../includes/Harl.hpp"

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn'tput enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."\
	<< "I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {
	int i = 0;
	std::string	words[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*callFunc[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (; i < 4 && (words[i].compare(0, words[i].size(),level) != 0); i++) {}
		switch (i)
		{
		case 0:
			for (int k = 0; k < 4; k++)
				(this->*callFunc[k])();
			break;
		case 1:
			for (int k = 1; k < 4; k++)
				(this->*callFunc[k])();
			break;
		case 2:
			for (int k = 2; k < 4; k++)
				(this->*callFunc[k])();
			break;
		case 3:
			(this->*callFunc[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
}

Harl::Harl(void)
{
}

Harl::~Harl()
{
}





