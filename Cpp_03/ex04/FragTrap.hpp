#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

private:
	FragTrap();

protected:
	static std::string typeOfAttack[10];

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	FragTrap &operator = (const FragTrap &copy);
	void vaultHunterDotExe(std::string const &target);
};

#endif
