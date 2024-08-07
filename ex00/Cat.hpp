#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal{

public:

	Cat();
	Cat( Cat &copy );
	virtual ~Cat();

	Cat &operator=( Cat &rhs );
	void	makeSound() const;

};

#endif
