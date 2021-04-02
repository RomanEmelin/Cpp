#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	FragTrap hero("Dark Shcneider");
	FragTrap enemy("Anthrasax");
	ScavTrap scav("Door keeper");

	srand(time(0));

	hero.vaultHunterDotExe(enemy.getName());
	hero.meleeAttack(enemy.getName());
	hero.rangedAttack(enemy.getName());
	hero.takeDamage(21);
	hero.beRepaired(63);
	hero.takeDamage(42);
	hero.takeDamage(45);
	hero.beRepaired(110);
	hero.vaultHunterDotExe(enemy.getName());
	hero.vaultHunterDotExe(enemy.getName());
	hero.vaultHunterDotExe(enemy.getName());
	hero.vaultHunterDotExe(enemy.getName());
	hero.vaultHunterDotExe(enemy.getName());
	hero.vaultHunterDotExe(enemy.getName());

	std::cout << "<+==========+>" << std::endl;

	scav.challengeNewcomer();
	scav.takeDamage(24);
	scav.beRepaired(80);
	scav.meleeAttack(enemy.getName());
	scav.rangedAttack(enemy.getName());
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.takeDamage(99);
	scav.beRepaired(100);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.rangedAttack(enemy.getName());
	scav.takeDamage(15);
	scav.meleeAttack(hero.getName());
}

