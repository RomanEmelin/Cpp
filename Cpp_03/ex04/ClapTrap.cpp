#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << RED << this->_name << GREEN << " CL4p-TP is rise!" << ENDC << std::endl;
}

ClapTrap::ClapTrap() {

}
ClapTrap::~ClapTrap() {

	std::cout << RED << this->_name << " CL4P-TP fallen" << ENDC << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {

	std::cout << "Cl4P-TP Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy) {

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

void ClapTrap::rangedAttack(std::string const &target) {

	std::cout << RED << this->_name << ENDC << " attack "  GREEN << target << ENDC;
	std::cout << " at range, causing " << RED << this->_rangedAttackDamage << ENDC;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {

	std::cout << RED << this->_name << ENDC << " attack "  GREEN << target << ENDC;
	std::cout << " at melee, causing " << RED << this->_meleeAttackDamage << ENDC;
	std::cout << " points of damage!" << std::endl;
}

bool ClapTrap::takeDamage(unsigned int amount) {

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

void ClapTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {

		amount -= (this->_hitPoints - this->_maxHitPoints);
		this->_hitPoints = this->_maxHitPoints;
	}
	std::cout << RED << this->_name << ENDC << " is repaired for ";
	std::cout << GREEN << amount << ENDC << " healthpoints!" << std::endl;
}

std::string ClapTrap::getName() {

	return (this->_name);
}