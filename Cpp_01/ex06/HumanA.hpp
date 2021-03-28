#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include "Weapon.hpp"


class HumanA {

private:
	std::string	_name;
	Weapon&		_weapon;

public:
	Weapon();
	~Weapon();
	std::string attack();
};


#endif
