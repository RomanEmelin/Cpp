#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "FragTrap.hpp"

class ScavTrap {

private:
	ScavTrap();
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	std::string _name;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;
	static std::string _events[10];

public:
	ScavTrap(std::string name);
	ScavTrap &operator = (const ScavTrap &copy);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};


#endif
