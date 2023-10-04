#include "../includes/Weapon.hpp"

const std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string weaponType)
{
	this->type = weaponType;
}

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string weaponType)
{
	this->type = weaponType;
}

Weapon::~Weapon()
{
}
