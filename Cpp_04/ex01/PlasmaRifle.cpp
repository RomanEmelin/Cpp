#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const &name, int aPCost, int damage):
	AWeapon(name, aPCost, damage) {

	std::cout << RED + this->_name + ENDC + " pR created!" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle &copy) {

	this->_name = copy._name;
	this->_damage = copy._damage;
	this->_aPCost = copy._aPCost;
	return *this;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy): AWeapon(copy) {

}

PlasmaRifle::~PlasmaRifle() {

	std::cout << RED + this->_name + ENDC + " pR destroyed" << std::endl;
}

void PlasmaRifle::attack() const {

	std::cout << RED << "* piouuu " << GREEN << "piouuu " << PURPLE;
	std::cout << "piouuu *" << ENDC << std::endl;
}