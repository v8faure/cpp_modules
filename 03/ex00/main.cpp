#include "ClapTrap.hpp"

int main () {
	ClapTrap A1("Chucky");

	A1.setAttackdamage(5);
	A1.attack("punchbag");
	A1.takeDamage(3);
	A1.beRepaired(1);
	A1.takeDamage(10);
	A1.attack("punchbag");
	A1.beRepaired(5);
	return 0;
}