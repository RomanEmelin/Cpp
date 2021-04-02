#include "FragTrap.hpp"

int main () {

	FragTrap hero("Dark Shcneider");
	FragTrap enemy("Anthrasax");
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
	return (0);
}

