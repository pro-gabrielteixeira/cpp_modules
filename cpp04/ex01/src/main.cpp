#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; // should not create a leak
		delete i;
	}
	std::cout << "\n<<<<<<< Other test >>>>>>>\n" << std::endl;
	{
		Animal *animals[10];
		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
		}
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
		}
	}
	return 0;
}