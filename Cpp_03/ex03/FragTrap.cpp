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

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << RED << this->_name << GREEN << " FR4G-TP is rise!" << ENDC << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << RED << this->_name << " FR4G-TP fallen" << ENDC << std::endl;
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

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy._name) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
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