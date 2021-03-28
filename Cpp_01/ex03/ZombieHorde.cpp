#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(unsigned int hordeSize) {

	std::string hordeNames[10] = {"\x1B[30mJenya\x1B[0m", "\x1B[31mAlmir\x1B[0m",
								  "\x1B[32mGeorg\x1B[0m", "\x1B[33mTakhir\x1b[0m", "\x1b[34mKirill\x1B[0m",
								  "\x1B[42mDima\x1B[0m", "\x1B[40mArpine\x1B[0m", "\x1B[35mFanzil\x1B[0m",
								  "\x1B[43mAndrey\x1B[0m", "\x1B[43mPolina\x1B[0m"};
	std::string	type[10] = {"School21 Student", "Dumb", "Slow", "Angry", "Envy", "Gluttony",
							   "Fast", "Smart", "Ugly", "Pretty"};
	this->_hordeSize = hordeSize;
	if (hordeSize > 0) {
		this->_zombies = new Zombie[hordeSize];
		for (unsigned int i = 0; i < hordeSize; i++) {
			sleep(1);
			srand(time(0));
			this->_zombies[i].setZombieData(hordeNames[rand() % 10], type[rand() % 10]);
			std::cout << this->_zombies[i].getName() << " is rise!" << std::endl;
		}
		std::cout << this->_hordeSize << " \x1b[31mHorde is rise!\x1B[0m" << std::endl;
	}
}

ZombieHorde::~ZombieHorde() {

	delete[] this->_zombies;
	std::cout << this->_hordeSize << " \x1B[31mHorde is fallen!\x1B[0m" << std::endl;
}

void ZombieHorde::announce() {

	if (this->_hordeSize > 0)
		for (unsigned int i = 0; i < this->_hordeSize; i++) {
			this->_zombies[i].announce();
		}
}