#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaaaww !!" << std::endl;
}
