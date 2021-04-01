#ifndef CPP_PLASMARIFLE_H
#define CPP_PLASMARIFLE_H
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {

public:
	PlasmaRifle(std::string const & name, int aPCost, int damage);
	PlasmaRifle &operator = (const PlasmaRifle &copy);
	PlasmaRifle(PlasmaRifle const &copy);
	virtual ~PlasmaRifle();

	void attack() const;
};


#endif
