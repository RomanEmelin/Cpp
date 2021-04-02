#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {

	std::cout << GREEN << "* teleports from space *" << ENDC << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) {

	(void)copy;
	std::cout << GREEN << "* teleports from space *" << ENDC << std::endl;
}

AssaultTerminator::~AssaultTerminator() {

	std::cout << GREEN << "I’ll be back..." << ENDC << std::endl;
}

AssaultTerminator &AssaultTerminator::operator = (AssaultTerminator const &copy) {

	(void)copy;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const {

	AssaultTerminator *clone = new AssaultTerminator(*this);
	return  (clone);
}

void AssaultTerminator::battleCry() const {

	std::cout << RED << "This code is unclean. PURIFY IT!" << ENDC << std::endl;
}

void AssaultTerminator::rangedAttack() const {

	std::cout << PURPLE << "* does nothing *" << ENDC << std::endl;
}

void AssaultTerminator::meleeAttack() const {

	std::cout << PURPLE <<  "* attacks with chainfists *" << ENDC << std::endl;
}