#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator = (const WrongCat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong cat Sound!" << std::endl;
}