#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class   HumanB {
	private:
	Weapon		*weaponB;
	std::string	nameB;

	public:
	HumanB(std::string name);
	void setWeapon(Weapon &tpB);
	void attack(void);
};

#endif