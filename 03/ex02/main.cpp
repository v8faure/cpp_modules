#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");
	FragTrap fragger("fragger");

	scaver.guardgate();
	fragger.highFivesGuys();
	clapper.attack("fragger");
	fragger.takeDamage(20);
	fragger.attack("clapper");
	clapper.takeDamage(20);
	return (0);
}
