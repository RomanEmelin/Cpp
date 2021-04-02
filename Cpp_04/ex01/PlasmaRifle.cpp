#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon("Plasma Rifle", 5, 21) {
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