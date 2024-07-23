#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal{

public:

	Cat();
	Cat( Cat &copy );
	virtual ~Cat();

	Cat &operator=( Cat &rhs );
	void	makeSound() const;

private:

	Brain *_brain;

};

#endif
