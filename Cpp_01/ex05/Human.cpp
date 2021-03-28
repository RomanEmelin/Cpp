#include "Human.hpp"

Human::Human() {

	this->_brain = new Brain;
	std::cout << GREEN << "Human was born!" << ENDC << std::endl;
}

Human::~Human() {

	std::cout << RED << "Human is dead..." << ENDC << std::endl;
	delete(this->_brain);
}

std::string Human::identify() {

	return (this->_brain->identify());
}

std::string Human::getHumanAddress() {

	std::stringstream address;

	address << this;
	return (address.str());
}

Brain* Human::getBrainAddress() {

	return (this->_brain);
}