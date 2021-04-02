#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int aPCost, int damage):
_name(name), _aPCost(aPCost), _damage(damage) {
}

AWeapon &AWeapon::operator = (const AWeapon &copy) {

	this->_name = copy._name;
	this->_damage = copy._damage;
	this->_aPCost = copy._aPCost;
	return *this;
}

AWeapon::AWeapon(AWeapon const &copy) {

	*this = copy;
}

AWeapon::~AWeapon() {

	std::cout << RED << this->_name << ENDC << " weapon destroyed" << std::endl;
}

std::string const &AWeapon::getName() const {

	return (this->_name);
}

int AWeapon::getAPCost() const {

	return (this->_aPCost);
}

int AWeapon::getDamage() const {

	return (this->_damage);
}