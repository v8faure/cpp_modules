#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap first("first");
	DiamondTrap second("second");

	first.attack("second");
	second.takeDamage(30);
	second.attack("first");
	first.takeDamage(30);
	first.whoAmI();
	second.whoAmI();
	return (0);
}
