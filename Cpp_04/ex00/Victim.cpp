#include "Victim.hpp"

Victim::Victim(std::string name): _name(name) {

	std::cout << "Some random victim called " << GREEN << this->_name << ENDC;
	std::cout << " just appeared!" << std::endl;
}

Victim::~Victim() {

	std::cout << "Victim " << GREEN << this->_name << ENDC;
	std::cout << " just died for no apparent reason!" << std::endl;
}

Victim &Victim::operator = (const Victim &copy) {

	this->_name = copy._name;
	return (*this);
}

Victim::Victim(const Victim &copy) {

	*this = copy;
}

std::string const &Victim::getName() const {

	return (this->_name);
}

void Victim::getPolymorphed()const {

	std::cout << GREEN << this->_name << ENDC;
	std::cout << " has been turned into a cute little sheep!" << std::endl;
}
std::ostream &operator << (std::ostream &out, const Victim &victim) {

	out << "I'm " << GREEN << victim.getName() << ENDC;
	out << " and I like otters!" << std::endl;
	return (out);
}