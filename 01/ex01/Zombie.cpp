#include "Zombie.hpp"

void Zombie::announce(void) {
    std::cout<< name << ":  BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::setname(std::string str) {
    name = str;
}