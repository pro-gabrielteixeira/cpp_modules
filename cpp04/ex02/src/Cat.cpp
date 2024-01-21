#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
	*this = copy;
}

Cat& Cat::operator = (const Cat &copy)
{
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain(*copy.brain);
		this->type = copy.type;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meaw, Meaw!" << std::endl;
}