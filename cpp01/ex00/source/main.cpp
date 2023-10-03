#include "../includes/Zombie.hpp"

int main(void)
{
	Zombie *king = newZombie("KING");
	std::cout << "KING: Silence, humans are hunting us!!" << std::endl;
	randomChump("Daniel");
	randomChump("Kletin");
	delete king;
	return (0);
}