#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(Cat &copy) : AAnimal(copy), _brain(new Brain)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete _brain;
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
