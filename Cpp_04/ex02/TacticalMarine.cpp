#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {

	std::cout << GREEN << "Tactical Marine ready for battle!" << ENDC << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &copy) {

	(void)copy;
	std::cout << GREEN << "Tactical Marine ready for battle!" << ENDC << std::endl;
}

TacticalMarine::~TacticalMarine() {

	std::cout << GREEN << "Aaargh..." << ENDC << std::endl;
 }

TacticalMarine &TacticalMarine::operator = (TacticalMarine const &copy) {

	(void)copy;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const {

	TacticalMarine *clone = new TacticalMarine(*this);
	return  (clone);
}

void TacticalMarine::battleCry() const {

	std::cout << RED << "For the holy PLOT!" << ENDC << std::endl;
}

void TacticalMarine::rangedAttack() const {

	std::cout << PURPLE << "* attacks with a bolter *" << ENDC << std::endl;
}
void TacticalMarine::meleeAttack() const {

	std::cout << PURPLE << "* attacks with a chainsword *" << ENDC << std::endl;
}