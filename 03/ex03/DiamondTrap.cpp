#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
	this->_name = "Nobody";
	std::cout << "DiamondTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

DiamondTrap::DiamondTrap( std::string Name ): ClapTrap( Name + "_clap_name" )
{
	this->_name = Name;
	std::cout << "DiamondTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &src ) { *this = src; }


DiamondTrap::~DiamondTrap()
{
	if (this->_hitPoints == 0)
		std::cout << "DiamondTrap: < " << this->_name << " > is Dead!" << std::endl;
	else
		std::cout << "DiamondTrap: < " << this->_name << " > is leaving the fight!" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( const DiamondTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	DiamondTrap::attack( std::string const & target ) { ScavTrap::attack(target); }

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap: My DiamondTrap Name is " << this->_name << std::endl;
	std::cout << "DiamondTrap: My ClapTrap Name is " << this->ClapTrap::_name << std::endl;
}
