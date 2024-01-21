#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
	*this = copy;
}

Dog& Dog::operator = (const Dog &copy)
{
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain(*copy.brain);
		this->type = copy.type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof, Woof!" << std::endl;
}