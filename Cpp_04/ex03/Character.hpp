#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP
#include "ICharacter.hpp"

class Character: public ICharacter {

private:
	Character();
	std::string _name;
	int _equipped;
	AMateria *_inventory[4];

public:
	Character(std::string const &name);
	Character(Character const &copy);
	virtual ~Character();

	Character &operator = (Character const &copy);

	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	std::string const &getName() const;
};


#endif //CPP_CHARACTER_H
