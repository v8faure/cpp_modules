#include "Zombie.hpp"

int main() {
    Zombie *nz = zombieHorde(3, "Frank");
    for(int i = 0; i < 3; i++)
        nz->announce();
    delete [] nz;
    return 0;
}
