#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name);

void FragTrap::rangedAttack(std::string const &target) {

	std::cout << "FR4G-TP" << GREEN << this->_name << ENDC;
	std::cout << "attacks"  << target << "at range, causing";
	std::cout << RED << this->_rangedAttackDamage << ENDC;
	std::cout << "points of damage!" << std::endl;
}
void FragTrap::meleeAttack(std::string const &target);
void FragTrap::takeDamage(unsigned int amount);
void FragTrap::beRepaired(unsigned int amount);