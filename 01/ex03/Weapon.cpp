#include "Weapon.hpp"

void Weapon::setType(std::string type) {
    type_ = type;
}

std::string & Weapon::getType(void) {
    return type_;
}