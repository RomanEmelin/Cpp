#include "FragTrap.hpp"

std::string FragTrap::typeOfAttack[10] = {

		"Anal fissure!",
		"Avada Kedavra!",
		"I came here to smoke and kick your ass, and as you can see, I've already finished smoking.",
		"Burning lower back!",
		"Here come the pain!",
		"Dragon slave!",
		"Chin Chin Choppa...",
		"Deathly fart with garlic... pshhh...",
		"Transmutation!",
		"Boo Ray, Boo Ray Dead. Obey your blood oath and come forth from the land of Abaddon. Fires of Gehenna become a fiery blast and burn everything around. Exodus\nBrain Brain Dead. Obey the contract of blood from the land of Abadon come forth. Gehenna's Fire explode in flame and in it's sum incinerate all. Evil Blaze of Burning EXODUS"
};

FragTrap::FragTrap(std::string name): _name(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << RED << this->_name << GREEN << " is rise!" << ENDC << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << RED << this->_name << " fallen" << ENDC << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator = (const FragTrap &copy) {

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

void FragTrap::rangedAttack(std::string const &target) {

	std::cout << RED << this->_name << ENDC << " attack "  GREEN << target << ENDC;
	std::cout << " at range, causing " << RED << this->_rangedAttackDamage << ENDC;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {

	std::cout << RED << this->_name << ENDC << " attack "  GREEN << target << ENDC;
	std::cout << " at melee, causing " << RED << this->_meleeAttackDamage << ENDC;
	std::cout << " points of damage!" << std::endl;
}

bool FragTrap::takeDamage(unsigned int amount) {

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

void FragTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints) {

		amount -= (this->_hitPoints - this->_maxHitPoints);
		this->_hitPoints = this->_maxHitPoints;
	}
	std::cout << RED << this->_name << ENDC << " is repaired for ";
	std::cout << GREEN << amount << ENDC << " healthpoints!" << std::endl;
}

void FragTrap::vaultHunterDotExe(std::string const &target) {

	int damage;

	if (this->_energyPoints >= 25) {

		this->_energyPoints -= 25;
		std::cout << RED << this->_name << ENDC;
		std::cout << GREEN << " " << FragTrap::typeOfAttack[rand() % 10] << ENDC <<" attacks ";
		damage = rand () % 50;
		std::cout << target << " for " << RED << damage << ENDC;
		std::cout << " damage points!" << std::endl;
		this->_hitPoints -= damage;
	}
	else
		std::cout << RED << this->_name << ENDC << " is out of energy!" << std::endl;
}

std::string FragTrap::getName() {

	return (this->_name);
}