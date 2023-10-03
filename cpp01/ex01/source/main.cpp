#include "../includes/Zombie.hpp"

int main(void)
{
	int	amount = 20;
	std::cout << "KING: Come to life!!!" << std::endl;
	Zombie *horde;
	horde = zombieHorde(amount, "Son");
	std::cout << "KING: LONG LIFE TO MY SONS!! Let me hear you!" << std::endl;
	for (int i = 0; i < amount; i++)
	{
		std::cout << "Son number " << (i + 1) << ": ";
		horde[i].announce();
	}
	delete[] horde;
	std::cout << "KING: NOOOOOO!! MY SOOONS...." << std::endl;
	return (0);
}