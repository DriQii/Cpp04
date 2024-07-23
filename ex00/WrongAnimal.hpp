#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{

public:

	WrongAnimal();
	WrongAnimal( WrongAnimal &copy );
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();

	WrongAnimal &operator=( WrongAnimal &rhs );
	void	makeSound() const;

	std::string getType() const;

protected:

	std::string	_type;

};

#endif
