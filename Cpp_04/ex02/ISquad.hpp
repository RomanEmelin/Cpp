#ifndef CPP_ISQUAD_H
#define CPP_ISQUAD_H
#include "ISpaceMarine.hpp"

class ISquad {

public:
	virtual ~ISquad() {};
	virtual int getCount() const = 0; //returns the number of units currently in the squad.
	virtual ISpaceMarine* getUnit(int) const = 0; //returns a pointer to the Nth unit (Of course, we start at 0. Null pointer in case of out-of-bounds index.)
	virtual int push(ISpaceMarine*) = 0; //adds the XXX unit to the end of the squad.
};

#endif
