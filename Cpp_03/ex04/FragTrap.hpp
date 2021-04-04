#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

protected:
	FragTrap();
	static std::string typeOfAttack[10];

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap &operator = (const FragTrap &copy);
	void vaultHunterDotExe(std::string const &target);
};

#endif