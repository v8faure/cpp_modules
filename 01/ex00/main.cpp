#include "Zombie.hpp"


Zombie* newZombie( std::string name ) {
	Zombie  newzombie(name);
	newzombie.announce();
	return &newzombie;
}

void randomChump( std::string name ) {
	Zombie  newzombie(name);
	newzombie.announce();
}
int main() {
	Zombie *nz = newZombie("Eddy");
	randomChump("Chuck");
}
