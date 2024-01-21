#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	std::cout << "\n<<<<<<< Wrong Animal tests >>>>>>>\n" << std::endl;
	{
		const WrongAnimal *meta = new WrongAnimal();
		const Animal *j = new Dog();
		const WrongAnimal *i = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the Wrongcat sound!
		j->makeSound();
		meta->makeSound();
		delete i;
		delete j;
		delete meta;
	}
	return 0;
}