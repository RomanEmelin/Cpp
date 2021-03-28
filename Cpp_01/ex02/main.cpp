#include "ZombieEvent.hpp"
#include <ctime>
#include <unistd.h>

int main() {

	ZombieEvent zombieEvent;
	Zombie* zombie;
	std::string	type[10] = {"School21 Student", "Dumb", "Slow", "Angry", "Envy", "Gluttony",
					"Fast", "Smart", "Ugly", "Pretty"};

	for (int i = 0; i < 10; i++)
	{
		sleep(1);
		srand(time(0));
		zombieEvent.setZombieType(type[rand() % 10]);
		zombieEvent.randomChump();
	}
	zombie = zombieEvent.newZombie("\x1B[31mMwinter\x1B[0m");
	delete(zombie);
	return (0);
}


