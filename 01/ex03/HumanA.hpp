#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA {
	private:
	std::string	nameA;
	Weapon		& weaponA;

	public:
	HumanA(std::string nmA, Weapon & tpA);
	void attack(void);
};

#endif