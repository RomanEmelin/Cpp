#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon): _name(name), _weapon(weapon) {

	std::cout << RED << this->_name << ENDC;
	std::cout << " with " << GREEN << this->_weapon.getType() << ENDC << " is rise." << std::endl;
}

HumanA::~HumanA() {

	std::cout << this->_name << " died..." << std::endl;
}

void HumanA::attack() {

	std::cout << RED << this->_name << ENDC << " attacks with his ";
	std::cout << GREEN << this->_weapon.getType() <<  ENDC << std::endl;
}