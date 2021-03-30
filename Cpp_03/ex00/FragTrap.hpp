#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP
#include <string>
#include <iostream>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class FragTrap
{

private:
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
	FragTrap(std::string name);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
