#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {

}

Cure::Cure(Cure const &copy): AMateria("cure") {

	this->_xp = copy._xp;
}

Cure::~Cure() {}

Cure &Cure::operator = (Cure const &copy) {

	this->_xp = copy._xp;
	return (*this);
}

AMateria *Cure::clone() const {

	Cure *copy = new Cure(*this);
	return (copy);
}

void Cure::use(ICharacter &target) {

	AMateria::use(target);
	std::cout << GREEN << "* heals " << target.getName() << "’s wounds *" << ENDC << std::endl;
}