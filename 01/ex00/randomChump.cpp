#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie  newzombie(name);
	newzombie.announce();
}
