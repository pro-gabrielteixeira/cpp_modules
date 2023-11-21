#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	{
		ScavTrap monster("Frank");

		for (int i = 3; i > 0; i--)
		{
			monster.attack("Fulano");
		}
	}

	{
		ScavTrap bob("bob");

		bob.attack("target");
		bob.takeDamage(5);
		bob.beRepaired(10);
		bob.attack("target");
		bob.takeDamage(100);
		bob.beRepaired(100);

		std::cout << std::endl;
		bob.guardGate();
		std::cout << std::endl;
	}
}