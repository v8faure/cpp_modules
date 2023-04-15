#include "ClapTrap.hpp"

//constructors & destructor
ClapTrap::ClapTrap(std::string const _name): name(_name), hitpoints(10), energypoints(10), attackdamage(0) {
	std::cout<< "Constructor called" <<std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &copy) {
	name 		 = copy.getName();
	hitpoints 	 = copy.getHitpoints();
	energypoints = copy.getEnergypoints();
	attackdamage = copy.getAttackdamage();
}
ClapTrap::~ClapTrap() {
	std::cout<< "Destructor called" <<std::endl;
}

//setters
void ClapTrap::setName(std::string const _name) {
	name = _name;
}
void ClapTrap::setHitpoints(int const _hitpoints) {
	hitpoints = _hitpoints;
}
void ClapTrap::setEnergypoints(int const _energypoints) {
	energypoints = _energypoints;
}
void ClapTrap::setAttackdamage(int const _attackdamage) {
	attackdamage = _attackdamage;
}

//getters
std::string ClapTrap::getName() const {return(name);}
int ClapTrap::getHitpoints() 	const {return(hitpoints);}
int ClapTrap::getEnergypoints() const {return(energypoints);}
int ClapTrap::getAttackdamage() const {return(attackdamage);}

//operators
ClapTrap & ClapTrap::operator=(ClapTrap &other) {
	if (this != &other) {
		setName(other.getName());
		setHitpoints(other.getHitpoints());
		setEnergypoints(other.getEnergypoints());
		setAttackdamage(getAttackdamage());
	}
	return(*this);
}

//methods
void ClapTrap::attack(const std::string& target){
	if (getEnergypoints() > 0) {
		setEnergypoints(getEnergypoints() - 1);
		if (getHitpoints() <= 0) {
		std::cout<< "ClapTrap " << getName() << "  is already dead!" << std::endl;
		return;
		}
		std::cout<< "ClapTrap " << getName() << " attacks " << target <<
		", causing " << getAttackdamage() << " point of damage!" <<std::endl;
	}
	else 
		std::cout << "No energy points left! ClapTrap " << getName() << " Game Over" <<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout<< "ClapTrap " << getName() << " takes " << amount
	<< " points of damage!" <<std::endl;
	setHitpoints(getHitpoints() - amount);
	if (getHitpoints() <= 0)
		std::cout<< "ClapTrap " << getName() << " Game Over!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (getEnergypoints() > 0) {
		setEnergypoints(getEnergypoints() - 1);
		if (getHitpoints() <= 0) {
		std::cout<< "ClapTrap " << getName() << "  is already dead!" << std::endl;
		return;
		}
		std::cout<< "ClapTrap " << getName() << " repairs " << amount <<
		" hit points!" <<std::endl;
		setHitpoints(getHitpoints() + amount);
	}
	else 
		std::cout << "No energy points left! ClapTrap " << getName() << " Game Over" <<std::endl;
}