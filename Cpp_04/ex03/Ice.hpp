#ifndef CPP_ICE_H
#define CPP_ICE_H
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria {

public:
	Ice();
	Ice(Ice const &copy);
	virtual ~Ice();

	Ice &operator = (Ice const &copy);

	AMateria *clone() const;
	void use(ICharacter &target);
};


#endif //CPP_ICE_H
