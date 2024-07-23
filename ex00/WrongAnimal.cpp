#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

std::string WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "What sound does an WrongAnimal make?" << std::endl;
}
