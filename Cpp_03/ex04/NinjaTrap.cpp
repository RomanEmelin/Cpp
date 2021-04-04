#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap (std::string name): ClapTrap(name) {

	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << RED << this->_name << GREEN << " N1NJ4-TP is rise!" << ENDC << std::endl;
}
NinjaTrap::NinjaTrap(): ClapTrap() {

	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
}
NinjaTrap::~NinjaTrap() {

	std::cout << RED << this->_name << " N1NJ4-TP fallen" << ENDC << std::endl;
}

NinjaTrap &NinjaTrap::operator = (const NinjaTrap &copy) {

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

NinjaTrap::NinjaTrap(const NinjaTrap &copy): ClapTrap(copy._name) {

	std::cout << "N1NJ4-TP Copy constructor called" << std::endl;
	*this = copy;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {

	if (this->_energyPoints >= 50) {

		this->_energyPoints -= 50;
		std::cout << RED <<this->_name << ENDC << " Use Cl4P-TR4P BLAME! ";
		std::cout << GREEN << clapTrap.getName() << ENDC;
		std::cout << " venom!" << std::endl;
	}
	else {
		std::cout << RED << this->_name << ENDC << " is out of energy, ";
		std::cout << GREEN << clapTrap.getName() << ENDC;
		std::cout << " explodes in your hands..." << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {

	if (this->_energyPoints >= 43) {

		this->_energyPoints -= 43;
		std::cout << RED <<this->_name << ENDC << " Use SC4V-TR4P ANNIHILATOR ";
		std::cout << GREEN << scavTrap.getName() << ENDC;
		std::cout << " exodus!!" << std::endl;
	}
	else {
		std::cout << RED << this->_name << ENDC << " is out of energy, ";
		std::cout << GREEN << scavTrap.getName() << ENDC;
		std::cout << " eat him soul..." << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {

	if (this->_energyPoints >= 30) {

		this->_energyPoints -= 30;
		std::cout << RED <<this->_name << ENDC << " Use FR4G-TRAP IC3 P34ck! ";
		std::cout << GREEN << fragTrap.getName() << ENDC;
		std::cout << " venom!" << std::endl;
	}
	else {
		std::cout << RED << this->_name << ENDC << " is out of energy, ";
		std::cout << GREEN << fragTrap.getName() << ENDC;
		std::cout << " rock you.";
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {

	if (this->_energyPoints >= 43) {

		this->_energyPoints -= 43;
		std::cout << RED <<this->_name << ENDC << " Use N1NJ4-TR4P SILENT FOG ";
		std::cout << GREEN << ninjaTrap.getName() << ENDC;
		std::cout << " exodus!!" << std::endl;
	}
	else {
		std::cout << RED << this->_name << ENDC << " is out of energy, ";
		std::cout << GREEN << ninjaTrap.getName() << ENDC;
		std::cout << " takes your hearth..." << std::endl;
	}
}