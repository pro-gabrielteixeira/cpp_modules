#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator = (const Animal &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "No Sound!" << std::endl;
}