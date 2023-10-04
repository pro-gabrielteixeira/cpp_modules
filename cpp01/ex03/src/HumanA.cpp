#include "../includes/HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA ::HumanA(std::string setName, Weapon &setWeapon)
{
	this->name = setName;
	this->weapon = &setWeapon;
}

HumanA ::~HumanA ()
{
}