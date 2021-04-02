#ifndef CPP_SQUAD_H
#define CPP_SQUAD_H
#include "ISquad.hpp"
#include <iostream>
#include <string>

class Squad: public ISquad {

private:
	int _squadCount;
	ISpaceMarine **_units;

public:
	Squad();
	Squad(Squad const &copy);
	virtual ~Squad();

	Squad &operator = (Squad const &copy);

	int getCount() const;
	ISpaceMarine* getUnit(int index) const;
	int push(ISpaceMarine *unit);
};


#endif //CPP_SQUAD_H
