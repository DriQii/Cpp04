#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal{

public:

	Dog();
	Dog( Dog &copy );
	virtual ~Dog();

	Dog &operator=( Dog &rhs );
	void	makeSound() const;

};

#endif
