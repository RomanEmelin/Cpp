#ifndef CPP_CURE_H
#define CPP_CURE_H
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria {

public:
	Cure();
	Cure(Cure const &copy);
	virtual ~Cure();

	Cure &operator = (Cure const &copy);

	AMateria *clone() const;
	void use(ICharacter &target);
};


#endif
