#include "ZombieHorde.hpp"

int main() {

	ZombieHorde* firstHorde = new ZombieHorde(5);
	ZombieHorde secondHorde(4);

	firstHorde->announce();
	delete (firstHorde);
	secondHorde.announce();
	return (0);
}

