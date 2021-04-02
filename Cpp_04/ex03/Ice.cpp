#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {

}

Ice::Ice(Ice const &copy): AMateria("ice") {

	this->_xp = copy._xp;
}

Ice::~Ice() {}

Ice &Ice::operator = (Ice const &copy) {

	this->_xp = copy._xp;
	return (*this);
}

AMateria *Ice::clone() const {

	Ice *copy = new Ice(*this);
	return (copy);
}

void Ice::use(ICharacter &target) {

	AMateria::use(target);
	std::cout << SKYBLUE << "* shoots an ice bolt at " << target.getName() <<" *" << ENDC << std::endl;
}