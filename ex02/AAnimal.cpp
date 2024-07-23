#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}
AAnimal::AAnimal(AAnimal &copy)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal default destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal &rhs)
{
	this->_type = rhs._type;
	return(*this);
}

std::string AAnimal::getType() const
{
	return(_type);
}
