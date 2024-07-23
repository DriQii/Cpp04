#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain)
{
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(Dog &copy) : AAnimal(copy), _brain(new Brain)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(Dog &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wooouf Woouf !!" << std::endl;
}
