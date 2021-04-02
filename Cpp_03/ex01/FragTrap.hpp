#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP
#include <string>
#include <iostream>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class FragTrap {

private:
	FragTrap();
	int _hitPoints;
	int _maxHitPoints;
	int _energyPoints;
	int _maxEnergyPoints;
	int _level;
	std::string _name;
	int _meleeAttackDamage;
	int _rangedAttackDamage;
	int _armorDamageReduction;
	static std::string typeOfAttack[10];

public:
	FragTrap &operator = (const FragTrap &copy);
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaultHunterDotExe(std::string const &target);
	std::string getName();
};


#endif
