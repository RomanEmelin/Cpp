#include "Pony.hpp"

Pony::Pony() {
	std::cout << GREEN << "Pony created!" << ENDC << std::endl;
}

void Pony::setPonyData(std::string name, std::string color, int age) {

	this->_color = color;
	this->_name = name;
	this->_age = age;
}

std::string Pony::getName() {
	return (this->_name);
}

std::string Pony::getColor() {
	return (this->_color);
}

int Pony::getAge() {
	return (this->_age);
}
Pony::~Pony() {
	std::cout << RED <<this->getName() << " Pony died." << ENDC << std::endl;
}
