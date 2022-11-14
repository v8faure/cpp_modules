#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class   HumanA {
	private:
	Weapon		weaponA;
	std::string	nameA;

	public:
	HumanA();
	HumanA(std::string & nmA, Weapon & tp) {
		nameA = nmA;
		weaponA = tp;
	}
	void attack(void);
};

#endif