#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap Default constructor Called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackPoints = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy constructor Called" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackPoints = copy.attackPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy operator Called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackPoints = copy.attackPoints;
	}
	return *(this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " \
		<< target << " causing " << attackPoints << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
	{
		if (this->hitPoints == 0)
			std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		else
			std::cout << "No energy points left" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repaired " \
		<< amount << " Hit points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
	{
		if (this->hitPoints == 0)
			std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
		else
			std::cout << "No energy points left" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " took " \
		<< amount << " Hit damage points!" << std::endl;
		if (this->hitPoints < amount)
			this->hitPoints = 0;
		else
			this->hitPoints -= amount;
	}
	if (this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
}