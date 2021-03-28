#ifndef CPP_ZOMBIEEVENT_HPP
#define CPP_ZOMBIEEVENT_HPP
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent {
private:
	std::string _type;

public:
	ZombieEvent();
	~ZombieEvent();
	Zombie* newZombie(std::string name);
	void setZombieType(std::string type);
	void randomChump();
};


#endif //CPP_ZOMBIEEVENT_H
