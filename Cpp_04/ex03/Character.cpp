#include "Character.hpp"

Character::Character(std::string const &name): _name(name), _equipped(0) {

	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = nullptr;
	}
}

Character::Character(Character const &copy): _name(copy._name), _equipped(0) {

	for (int i = 0; i < this->_equipped; i++)
		this->equip(copy._inventory[i]->clone());
}

Character::~Character() {

	for (int i = 0; i < this->_equipped; i++)
		delete this->_inventory[i];
}

Character &Character::operator = (Character const &copy) {

	this->_name = copy._name;
	for (int i = 0; i < this->_equipped; i++)
		delete this->_inventory[i];
	this->_equipped = 0;
	for (int i = 0; i < copy._equipped; i++)
		this->equip(copy._inventory[i]->clone());
	for (int i = this->_equipped; i < 4; i++)
		this->_inventory[i] = nullptr;
	return (*this);
}

void Character::equip(AMateria *materia) {

	if (this->_equipped == 4 || !materia)
		return;
	for (int i = 0; i < this->_equipped; i++)
		if (this->_inventory[i] == materia)
			return;
	this->_inventory[this->_equipped++] = materia;
}

void Character::unequip(int idx) {

	if (this->_equipped <= idx || idx < 0 || !this->_inventory[idx])
		return;
	for (int i = idx; i < 3; i++) {

		this->_inventory[i] = this->_inventory[i + 1];
		this->_inventory[i + 1] = nullptr;
	}
	this->_equipped--;
}

void Character::use(int idx, ICharacter &target) {

	if (this->_equipped <= idx || idx < 0 || !this->_inventory[idx])
		return;
	this->_inventory[idx]->use(target);
}

std::string const &Character::getName() const{

	return this->_name;
}