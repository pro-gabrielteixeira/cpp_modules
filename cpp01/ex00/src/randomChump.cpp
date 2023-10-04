#include "../includes/Zombie.hpp"

void randomChump( std::string name )
{
	Zombie newRandomChump(name);
	newRandomChump.announce();
}