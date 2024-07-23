#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{

public:

	Animal();
	Animal( Animal &copy );
	Animal(std::string type);
	virtual ~Animal();

	Animal &operator=( Animal &rhs );
	virtual void	makeSound() const;

	std::string getType() const;

protected:

	std::string	_type;

};

#endif
