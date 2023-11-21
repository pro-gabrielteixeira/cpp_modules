#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator = (const ScavTrap& copy);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate(void);
};

#endif