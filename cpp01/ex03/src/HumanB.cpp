#include "../includes/HumanB.hpp"

void HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << name << " attacks with their ... unarmed" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &setWeapon)
{
	this->weapon = &setWeapon;
}

HumanB ::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB ::~HumanB ()
{
}