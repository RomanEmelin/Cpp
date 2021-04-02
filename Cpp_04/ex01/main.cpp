#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main() {

	Character* me = new Character("me");
	std::cout << *me;

	Enemy* radScorpion = new RadScorpion();
	Enemy* superMutant = new SuperMutant();
	AWeapon* plasmaRifle = new PlasmaRifle();
	AWeapon* powerFist = new PowerFist();

	me->equip(plasmaRifle);
	std::cout << *me;
	me->equip(powerFist);
	me->attack(radScorpion);
	std::cout << *me;
	me->equip(plasmaRifle);
	std::cout << *me;
	me->attack(radScorpion);
	std::cout << *me;
	me->attack(radScorpion);
	std::cout << *me;
	me->equip(powerFist);
	std::cout << *me;
	me->attack(superMutant);
	std::cout << *me;
	me->attack(superMutant);
	std::cout << *me;
	me->attack(superMutant);
	std::cout << *me;
	me->equip(plasmaRifle);
	std::cout << *me;
	me->attack(superMutant);
	std::cout << *me;
	me->attack(superMutant);
	std::cout << *me;
	me->attack(superMutant);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->equip(powerFist);
	std::cout << *me;
	me->attack(superMutant);
	delete(me);
	delete(plasmaRifle);
	delete(powerFist);
	return 0;
}

