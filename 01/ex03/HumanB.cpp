#include "HumanB.hpp"

HumanB::HumanB(std::string name): nameB(name) {}

void HumanB::attack(void) {
	std::cout<< nameB << " attacks with their " << weaponB->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon &tpB) {
		weaponB = &tpB;
	}