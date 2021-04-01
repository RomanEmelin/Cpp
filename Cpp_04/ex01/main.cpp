#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main() {

	PlasmaRifle plasmaRifle("Plasma rifle", 21, 5);
	PowerFist	powerFist("Power fist", 50, 8);
	SuperMutant superMutant(170, "Super mutant");
	RadScorpion radScorpion(80, "RadScorpion");

	powerFist.attack();
	plasmaRifle.attack();
	superMutant.takeDamage(65);
	std::cout << superMutant.getHP() << superMutant.getType() << std::endl;
}

