#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

private:
	const std::string	_name;
	Weapon&				_weapon;

public:
	HumanA(const std::string name, Weapon& weapon);
	~HumanA();
	void attack();
};


#endif
