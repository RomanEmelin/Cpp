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

	this->_currentWeapon = copy._currentWeapon;
	this->_actionPoints = copy._actionPoints;
	this->_name = copy._name;
	return *this;
}

Character::~Character() {

	std::cout << RED << this->_name + " is dead." << std::endl;
}

void Character::recoverAP() {

	this->_actionPoints += 10;
	if (this->_actionPoints > 40)
		this->_actionPoints = 40;
}

void Character::equip(AWeapon *weapon) {

	this->_currentWeapon = weapon;
}
void Character::attack(Enemy *enemy) {

	if (!enemy || !this->_currentWeapon)
		return ;
	if (this->_actionPoints < this->_currentWeapon->getAPCost()) {
		std::cout << RED << "No action points!" << ENDC << std::endl;
		return;
	}
	this->_actionPoints -= this->_currentWeapon->getAPCost();
	std::cout << GREEN + this->_name + ENDC " attacks " + RED + enemy->getType() + ENDC;
	std::cout << " with a " << PURPLE + this->_currentWeapon->getName() + ENDC << std::endl;
	this->_currentWeapon->attack();
	enemy->takeDamage(this->_currentWeapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const &Character::getName() const {

	return this->_name;
}

int Character::getAP() const {

	return this->_actionPoints;
}

AWeapon *Character::getWeapon() const {

	return this->_currentWeapon;
}

std::ostream &operator << (std::ostream &out, Character const &character) {

	if (character.getWeapon()){
		out << RED << character.getName() + ENDC " has " <<  GREEN << character.getAP() << ENDC << " ap";
		out << " and wields a " << PURPLE << character.getWeapon()->getName() << ENDC << std::endl;
	}
	else {
		out << RED << character.getName() + ENDC " has " <<  GREEN << character.getAP() << ENDC;
		out << " and is unarmed" << std::endl;
	}
	return out;
}