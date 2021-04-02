#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): _hp(hp), _type(type) {
}

Enemy::Enemy(Enemy const &copy) {

	*this = copy;
}

Enemy &Enemy::operator = (Enemy const &copy) {

	this->_type = copy._type;
	this->_hp = copy._hp;
	return *this;
}

Enemy::~Enemy() {
}

std::string const Enemy::getType() const {

	return this->_type;
}
int Enemy::getHP() const {

	return this->_hp;
}

void Enemy::takeDamage(int damage) {

	if (damage > 0 && this->_hp > 0) {

		this->_hp -= damage;
		if (this->_hp < 0)
			this->_hp = 0;
	}

}