#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {

	std::cout << RED << "Gaaah. Me want smash heads!" << ENDC << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy): Enemy(copy){

}

SuperMutant &SuperMutant::operator = (SuperMutant const &copy) {

	this->_type = copy._type;
	this->_hp = copy._hp;
	return *this;
}

SuperMutant::~SuperMutant() {

	std::cout << PURPLE << "Aaargh..." << ENDC << std::endl;
}

void SuperMutant::takeDamage(int damage) {

	if (damage > 3 && this->_hp > 0) {

		this->_hp -= (damage - 3);
		if (this->_hp < 0)
			this->_hp = 0;
	}
}