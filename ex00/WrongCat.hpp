#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{

public:

	WrongCat();
	WrongCat( WrongCat &copy );
	virtual ~WrongCat();

	WrongCat &operator=( WrongCat &rhs );
	void	makeSound() const;

};

#endif
