#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA {
	private:
	std::string	nameA;
	Weapon		& weaponA;

	public:
	// HumanA();
	HumanA(std::string nmA, Weapon & tpA): nameA(nmA), weaponA(tpA) {}
	// 	nameA = nmA;
	// 	weaponA = tpA;
	// 	// weaponA.setType(tpA.getType());
	// }
	// ~HumanA() {
	// 	std::cout<< nameA << "destroyed" <<std::endl;
	// }
	void attack(void);
};

#endif