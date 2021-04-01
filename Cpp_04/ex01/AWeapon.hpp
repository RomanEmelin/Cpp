#ifndef CPP_AWEAPON_HPP
#define CPP_AWEAPON_HPP
#include <iostream>
#include <string>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"

class AWeapon {

protected:
	AWeapon();
	std::string _name;
	int 		_aPCost;
	int 		_damage;

public:
	AWeapon(std::string const & name, int aPCost, int damage);
	AWeapon &operator = (const AWeapon &copy);
	AWeapon(AWeapon const &copy);
	virtual ~AWeapon();

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
