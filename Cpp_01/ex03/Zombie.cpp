#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name, std::string type) {

	this->_name = name;
	this->_type = type;
	std::cout << " Zombie " << _name << " is rise!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " is fall." << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}

std::string Zombie::getName() {
	return (this->_name);
}

void Zombie::setZombieData(std::string name, std::string type) {

	this->_name = name;
	this->_type = type;
}