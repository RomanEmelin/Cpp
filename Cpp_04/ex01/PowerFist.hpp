#ifndef CPP_POWERFIST_H
#define CPP_POWERFIST_H
#include "AWeapon.hpp"

class PowerFist: public AWeapon {

private:
	PowerFist();

public:
	PowerFist(std::string const & name, int aPCost, int damage);
	PowerFist &operator = (const PowerFist &copy);
	PowerFist(PowerFist const &copy);
	virtual ~PowerFist();

	void attack() const;
};


#endif
