#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type) {

	std::cout << this->_type << " ready." << std::endl;
}

Weapon::~Weapon() {
	std::cout << this->_type << " weapon is broken." << std::endl;
}

void Weapon::setType(const std::string &type) {

	this->_type = type;
}

const std::string& Weapon::getType() const{

	return (this->_type);
}