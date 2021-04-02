#ifndef CPP_SUPERTRAP_HPP
#define CPP_SUPERTRAP_HPP
#include <iostream>
#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {

private:
	SuperTrap();

public:
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap &copy);
	~SuperTrap();
	SuperTrap &operator = (const SuperTrap &copy);
};


#endif
