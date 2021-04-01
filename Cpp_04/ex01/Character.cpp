#include "Character.hpp"

Character::Character():
 _name(std::string()), _actionPoints(0), _currentWeapon(nullptr) {

}

Character::Character(std::string const &name):
	_name(name), _actionPoints(40), _currentWeapon(nullptr) {

}

Character::Character(Character const &copy) {

	*this = copy;
}

Character &Character::operator = (Character const &copy) {

	this->_type = copy._type;
	this->_hp = copy._hp;
	return *this;
}

Character::~Character() {

	std::cout << RED << this->_name+ " is dead." << std::endl;
}

void Character::recoverAP() {

}
void Character::equip(AWeapon *weapon);
void Character::attack(Enemy *enemy);
std::string const &Character::getName() const;