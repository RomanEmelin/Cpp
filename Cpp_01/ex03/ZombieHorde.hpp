#ifndef CPP_ZOMBIEHORDE_HPP
#define CPP_ZOMBIEHORDE_HPP
#include <iostream>
#include <string>
#include "Zombie.hpp"
#include <ctime>
#include <unistd.h>

class ZombieHorde {

private:
	Zombie*			_zombies;
	unsigned int 			_hordeSize;

public:
	ZombieHorde(unsigned int hordeSize);
	~ZombieHorde();
	void announce();
};


#endif
