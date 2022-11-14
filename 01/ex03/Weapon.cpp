#include "Weapon.hpp"

void Weapon::setType(std::string & tp) {
    type = tp;
}

std::string Weapon::getType(void) {
    return type;
}