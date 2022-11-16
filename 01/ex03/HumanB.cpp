#include "HumanB.hpp"

void HumanB::attack(void) {
	std::cout<< nameB << " attacks with their " << weaponB <<std::endl;
}

void HumanB::setWeapon(Weapon tpB) {
		weaponB = tpB;
	}