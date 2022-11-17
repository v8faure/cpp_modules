#include "HumanA.hpp"

HumanA::HumanA(std::string nmA, Weapon & tpA): nameA(nmA), weaponA(tpA) {}

void HumanA::attack(void) {
    std::cout<< nameA << " attacks with their " << weaponA.getType() <<std::endl;
}