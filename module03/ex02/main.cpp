//
// Created by petr on 27.06.2021.
//
#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main() {
//	ClapTrap clapTrap("clapClapTrap");
//	clapTrap.attack("someone");
//	clapTrap.beRepaired(5);
//	clapTrap.takeDamage(5);
//	ClapTrap(clapTrap).takeDamage(10);

//	ScavTrap scavTrap("sTrap");
//	std::cout << std::endl;
//	ScavTrap kek(scavTrap);
//	std::cout << std::endl;
//	kek.guardGate();
//	kek.attack("sTrap");
//	std::cout << std::endl;

	FragTrap trap("fragTrap");
	std::cout << std::endl;
	trap.highFivesGuys();
	trap.attack("someone");
	std::cout << std::endl;
}
