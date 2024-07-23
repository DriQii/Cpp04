#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal{

public:

	Dog();
	Dog( Dog &copy );
	virtual ~Dog();

	Dog &operator=( Dog &rhs );
	void	makeSound() const;

private:

	Brain *_brain;

};

#endif
