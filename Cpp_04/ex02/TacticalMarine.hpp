#ifndef CPP_TACTICALMARINE_HPP
#define CPP_TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine: public ISpaceMarine {

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	virtual ~TacticalMarine();

	TacticalMarine &operator = (TacticalMarine const &copy);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //CPP_TACTICALMARINE_H
