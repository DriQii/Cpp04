#include "Animal.hpp"

Animal::Animal() : _type("default")
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

std::string Animal::getType() const
{
	return(_type);
}

void	Animal::makeSound() const
{
	std::cout << "What sound does an animal make?" << std::endl;
}
