#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie *newzombie = new Zombie(name);
	newzombie->announce();
	return newzombie;
}
