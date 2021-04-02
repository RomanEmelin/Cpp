#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {

	std::cout << RED << "* click" << PURPLE << " click" << GREEN << " click *" << ENDC << std::endl;
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

	if (damage > 0 && this->_hp > 0) {

		this->_hp -= damage;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}
