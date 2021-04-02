#ifndef CPP_ASSAULTTERMINATOR_HPP
#define CPP_ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copy);
	virtual ~AssaultTerminator();

	AssaultTerminator &operator = (AssaultTerminator const &copy);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //CPP_ASSAULTTERMINATOR_H
