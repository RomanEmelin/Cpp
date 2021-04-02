#ifndef CPP_ISPACEMARINE_HPP
#define CPP_ISPACEMARINE_HPP
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"
#include <iostream>
#include <string>

class ISpaceMarine {

public:
	virtual ~ISpaceMarine() {};
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};
#endif //CPP_ISPACEMARINE_H
