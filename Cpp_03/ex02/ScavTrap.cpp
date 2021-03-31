#include "ScavTrap.hpp"

std::string ScavTrap::_events[10] = {

		"Try to open me!",
		"Pick up the key...",
		"Alohomara... AHahahaHAha!",
		"Sezam is open!",
		"I am very hard for you!",
		"Tic Tac Toe...",
		"I see you little mortal mouse.",
		"May be enough",
		"I am treasury keeper!",
		"You shall not pass!"
};
ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << RED << this->_name << GREEN << " SC4V-tp created." << ENDC << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy._name) {

	*this = copy;
	std::cout << this->_name << " invoke to copyMage SC4V-TP!" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy) {

	this->_hitPoints = copy._hitPoints;
	this->_maxHitPoints = copy._maxHitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_maxEnergyPoints = copy._maxEnergyPoints;
	this->_level = 	copy._level;
	this->_name = copy._name;
	this->_meleeAttackDamage = copy._meleeAttackDamage;
	this->_rangedAttackDamage = copy._rangedAttackDamage;
	this->_armorDamageReduction = copy._armorDamageReduction;
	std::cout << this->_name << " use copyMagic by SC4V-TP!" <<std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {

	std::cout << RED << this->_name << " SC4V-TP destroyed!" << ENDC << std::endl;
}

void ScavTrap::challengeNewcomer() {

	std::cout << this->_name << ": ";
	std::cout << this->_events[rand() % 10] << std::endl;
}