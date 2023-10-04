#include "../includes/Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie( void )
{
	std::cout << "bye bye motherf&#*@ " << name << std::endl;
}
