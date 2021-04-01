#include "RadScorpion.hpp"

RadScorpion::RadScorpion(int hp, std::string const &type): Enemy(hp, type) {

	std::cout << RED << "* click" + PURPLE + " click" + GREEN + " click *" << ENDC << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &copy): Enemy(copy){

}

RadScorpion &RadScorpion::operator = (RadScorpion const &copy) {

	this->_type = copy._type;
	this->_hp = copy._hp;
	return *this;
}

RadScorpion::~RadScorpion() {

	std::cout << PURPLE << "* SPROTCH *" << ENDC << std::endl;
}

void RadScorpion::takeDamage(int damage) {

	if (damage > 3 && this->_hp > 0) {

		this->_hp -= (damage - 3);
		if (this->_hp < 0)
			this->_hp = 0;
	}
}
