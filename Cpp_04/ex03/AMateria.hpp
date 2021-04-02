#ifndef CPP_AMATERIA_HPP
#define CPP_AMATERIA_HPP
#include <string>
#include <iostream>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"
#define SKYBLUE "\x1B[36m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define SHIMMER "\x1B[5m"
class AMateria;
#include "ICharacter.hpp"

class AMateria {

private:
	AMateria();

protected:
	std::string _type;
	unsigned int _xp;

public:
	AMateria(std::string const &type);
	virtual ~AMateria();
	std::string const &getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
