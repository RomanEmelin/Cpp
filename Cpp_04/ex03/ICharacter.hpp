#ifndef CPP_ICHARACTER_H
#define CPP_ICHARACTER_H
#include <string>
#include <iostream>
class ICharacter;
#include "AMateria.hpp"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"
#define SKYBLUE "\x1B[36m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define SHIMMER "\x1B[5m"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //CPP_ICHARACTER_H
