#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{

private:
	const Weapon	*_weapon;
	const std::string _name;

public:
	HumanB(const std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack();
};


#endif //CPP_HUMANB_H
