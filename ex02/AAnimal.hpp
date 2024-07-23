#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{

public:

	AAnimal();
	AAnimal( AAnimal &copy );
	AAnimal(std::string type);
	virtual ~AAnimal();

	AAnimal &operator=( AAnimal &rhs );
	virtual void	makeSound() const = 0;

	std::string getType() const;

protected:

	std::string	_type;

};

#endif
