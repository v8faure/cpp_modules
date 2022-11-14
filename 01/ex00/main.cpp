#include "Zombie.hpp"

int main() {
	Zombie *nz = newZombie("Eddy");
	randomChump("Chuck");
	nz->announce();
	delete nz;
}
