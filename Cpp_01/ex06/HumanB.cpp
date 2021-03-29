#include "HumanB.hpp"

HumanB::HumanB(const std::string name): _name(name) {

	std::cout << RED << this->_name << ENDC;
	std::cout << " with " << GREEN << "without weapon." << ENDC << " is rise." << std::endl;
}

HumanB::~HumanB() {

	std::cout << this->_name << " died..." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
}

void HumanB::attack() {

	if (_weapon) {
		std::cout << RED << this->_name << ENDC << " attacks with his ";
		std::cout << GREEN << this->_weapon->getType() << ENDC << std::endl;
	}
	else
		std::cout << RED << this->_name << ENDC << " attacks with fists";
}