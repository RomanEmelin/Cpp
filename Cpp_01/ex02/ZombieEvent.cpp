#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {

}

ZombieEvent::~ZombieEvent() {

}

Zombie* ZombieEvent::newZombie(std::string name) {

	return (new Zombie(name, this->_type));
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

void ZombieEvent::randomChump() {

	std::string randomZombieName[8] = {"\x1B[30mJenya\x1B[0m", "\x1B[31mAlmir\x1B[0m",
									"\x1B[32mGeorg\x1B[0m", "\x1B[33mTakhir\x1b[0m", "\x1b[34mKirill\x1B[0m",
									"\x1B[42mDima\x1B[0m", "\x1B[40mArpine\x1B[0m", "\x1B[35mFanzil\x1B[0m"};
	Zombie* zombie = newZombie(randomZombieName[rand() % 8]);
	zombie->announce();
	delete(zombie);
}