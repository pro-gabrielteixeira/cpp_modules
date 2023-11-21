#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor Called" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackPoints = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy constructor Called" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackPoints = copy.attackPoints;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap Copy operator Called" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackPoints = copy.attackPoints;
	}
	return *(this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " \
		<< target << " causing " << attackPoints << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else
	{
		if (this->hitPoints == 0)
			std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
		else
			std::cout << "No energy points left" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now on in Gate keeper mode!" << std::endl;
}
