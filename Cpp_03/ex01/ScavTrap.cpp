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
ScavTrap::ScavTrap(std::string name): _name(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {

	*this = copy;
	std::cout << this->_name << "invoke to copyMage!" << std::endl;
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
	std::cout << this->_name << " use copyMagic!" <<std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {

	std::cout << this->_name << "Door destroyed!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target) {

	std::cout << RED << this->_name << ENDC << " attack "  GREEN << target << ENDC;
	std::cout << " at range, causing " << RED << this->_rangedAttackDamage << ENDC;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {

	std::cout << RED << this->_name << ENDC << " attack "  GREEN << target << ENDC;
	std::cout << " at melee, causing " << RED << this->_meleeAttackDamage << ENDC;
	std::cout << " points of damage!" << std::endl;
}

bool ScavTrap::takeDamage(unsigned int amount) {

	int damage = amount - this->_armorDamageReduction;
	this->_hitPoints -= damage;
	if (this->_hitPoints < 0) {

		this->_hitPoints = 0;
		damage += this->_hitPoints;
	}
	std::cout << RED << this->_name << ENDC << " take " << RED << damage << ENDC;
	std::cout << " points of damage!" << std::endl;
	return (this->_hitPoints == 0);
}

void ScavTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {

		amount -= (this->_hitPoints - this->_maxHitPoints);
		this->_hitPoints = this->_maxHitPoints;
	}
	std::cout << RED << this->_name << ENDC << " is repaired for ";
	std::cout << GREEN << amount << ENDC << " healthpoints!" << std::endl;
}

void ScavTrap::challengeNewcomer() {

	std::cout << this->_name << ": ";
	std::cout << this->_events[rand() % 10] << std::endl;
}