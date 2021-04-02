#ifndef CPP_PEON_H
#define CPP_PEON_H
#include "Peon.hpp"
#include <iostream>
#include <string>
#include "Victim.hpp"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class Peon: public Victim {

private:
	Peon();

public:
	Peon(std::string name);
	Peon(const Peon &copy);
	virtual ~Peon();

	Peon &operator = (const Peon &copy);
	void getPolymorphed() const;
};


#endif //CPP_PEON_H
