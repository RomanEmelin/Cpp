#include "PowerFist.hpp"

PowerFist::PowerFist(std::string const &name, int aPCost, int damage):
	AWeapon(name, aPCost, damage) {

	std::cout << RED + this->_name + ENDC + " pF created!" << std::endl;
}

PowerFist &PowerFist::operator = (const PowerFist &copy) {

	this->_name = copy._name;
	this->_damage = copy._damage;
	this->_aPCost = copy._aPCost;
	return *this;
}

PowerFist::PowerFist(PowerFist const &copy): AWeapon(copy) {

}

PowerFist::~PowerFist() {

	std::cout << RED + this->_name + ENDC + " pF destroyed" << std::endl;
}

void PowerFist::attack() const {

	std::cout << GREEN << "* pschhh... " << RED << "SBAM! *" << ENDC << std::endl;
}