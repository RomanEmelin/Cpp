#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {

	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {

	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator = (const Peon &copy) {

	this->_name = copy._name;
	return (*this);
}

Peon::Peon(const Peon &copy): Victim(copy){

	*this = copy;
}

void Peon::getPolymorphed() const {

	std::cout << GREEN << this->_name << ENDC;
	std::cout << " has been turned into a pink pony!" << std::endl;
}