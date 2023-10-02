#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ) {
    Zombie *newzomb = new Zombie[N];
    for(int i = 0; i < N; i++)
        newzomb[i].setname(name);
    return newzomb;
}