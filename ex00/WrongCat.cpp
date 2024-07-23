#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaaaaaaaww !!" << std::endl;
}
