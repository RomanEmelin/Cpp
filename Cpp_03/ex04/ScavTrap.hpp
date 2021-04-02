#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

private:
	ScavTrap();
	static std::string _events[10];

public:
	ScavTrap(std::string name);
	ScavTrap &operator = (const ScavTrap &copy);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	void challengeNewcomer();
};


#endif
