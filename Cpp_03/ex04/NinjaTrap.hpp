#ifndef CPP_NINJATRAP_HPP
#define CPP_NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap {

protected:
	NinjaTrap();

public:
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap &operator = (const NinjaTrap &copy);
	void ninjaShoebox(ClapTrap &clapTrap);
	void ninjaShoebox(ScavTrap &scavTrap);
	void ninjaShoebox(FragTrap &fragTrap);
	void ninjaShoebox(NinjaTrap &ninjaTrap);
};

#endif