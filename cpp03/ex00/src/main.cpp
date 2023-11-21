#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap monster("Frank");

	for (int i = 10; i > 0; i--)
	{
		monster.attack("Fulano");
		monster.takeDamage(2);
		monster.beRepaired(1);
	}

}