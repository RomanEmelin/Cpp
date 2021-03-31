#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	FragTrap hero("FT name");
	FragTrap enemy("FT name2");
	ScavTrap scav("ST name");
	ClapTrap clapTrap("CT name!");

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

	std::cout << "<+==========+>" << std::endl;

	clapTrap.meleeAttack(enemy.getName());
	clapTrap.rangedAttack(enemy.getName());
	clapTrap.takeDamage(21);
	clapTrap.beRepaired(63);
	clapTrap.takeDamage(42);
	clapTrap.takeDamage(45);
	clapTrap.beRepaired(110);
}

