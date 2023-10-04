#include "../includes/Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name )
{
	this->name = name;
}

Zombie::Zombie( void)
{
	std::cout << "Zombie Created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name << " Died" << std::endl;
}
