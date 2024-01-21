#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator = (const Dog &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof, Woof!" << std::endl;
}