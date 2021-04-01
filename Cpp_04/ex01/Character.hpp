#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"

class Character {

private:
	Character();
	std::string _name;
	int			_actionPoints;
	AWeapon		*_currentWeapon;

public:
	Character(std::string const &name);
	Character(Character const &copy);
	Character &operator = (Character const &copy);

	~Character();

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	std::string const &getName() const;
};


#endif //CPP_CHARACTER_H
