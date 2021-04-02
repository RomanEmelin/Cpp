#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name) {

	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_maxHitPoints = this->FragTrap::_maxHitPoints;
	this->_energyPoints = this->NinjaTrap::_energyPoints;
	this->_maxEnergyPoints = this->NinjaTrap::_maxEnergyPoints;
	this->_level = 1;
	this->_meleeAttackDamage = this->NinjaTrap::_meleeAttackDamage;
	this->_rangedAttackDamage = this->FragTrap::_rangedAttackDamage;
	this->_armorDamageReduction = this->FragTrap::_armorDamageReduction;
	std::cout << RED << this->_name << GREEN << " SUP3R-TP is rise!" << ENDC << std::endl;
}

SuperTrap::~SuperTrap() {

	std::cout << RED << this->_name << " SUP3R-TP fallen" << ENDC << std::endl;
}

SuperTrap &SuperTrap::operator = (const SuperTrap &copy) {

	this->_hitPoints = copy._hitPoints;
	this->_maxHitPoints = copy._maxHitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_maxEnergyPoints = copy._maxEnergyPoints;
	this->_level = copy._level;
	this->_name = copy._name;
	this->_meleeAttackDamage = copy._meleeAttackDamage;
	this->_rangedAttackDamage = copy._rangedAttackDamage;
	this->_armorDamageReduction = copy._armorDamageReduction;
	return (*this);
}

SuperTrap::SuperTrap(const SuperTrap &copy): ClapTrap(copy._name), FragTrap(copy._name),
											 NinjaTrap(copy._name){

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}