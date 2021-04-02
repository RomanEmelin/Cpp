#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP
#include <iostream>
#include <string>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class ClapTrap {

protected:
	ClapTrap();
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	std::string _name;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;

public:
	ClapTrap &operator = (const ClapTrap &copy);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	virtual ~ClapTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
};

#endif //CPP_CLAPTRAP_H
