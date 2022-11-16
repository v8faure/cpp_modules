#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class   HumanB {
	private:
	Weapon		weaponB;
	std::string	nameB;

	public:
	HumanB();
	HumanB(std::string nmB) {
		nameB = nmB;
	}
	~HumanB();
	void setWeapon(Weapon tpB);
	void attack(void);
};

#endif