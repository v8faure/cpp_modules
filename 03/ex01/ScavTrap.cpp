#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string _name ) : ClapTrap( _name )
{
	name = _name;
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
	std::cout<< "ScavTrap constructor called" <<std::endl;
} 

ScavTrap::ScavTrap( const ScavTrap & src ) {*this = src;}

ScavTrap::~ScavTrap()
{
	if (hitpoints == 0)
		std::cout << "ScavTrap: < " << name << " > is Dead!" << std::endl;
	else
		std::cout << "ScavTrap: < " << name << " > is leaving the fight!" << std::endl;
}

ScavTrap & ScavTrap::operator = ( const ScavTrap &rhs )
{
	if (this == &rhs)
		return *this;
	name = rhs.name;
	hitpoints = rhs.hitpoints;
	energypoints = rhs.energypoints;
	attackdamage = rhs.attackdamage;
	return *this;
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap: < " << name << " > attack " << target
		<< ", causing " << attackdamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardgate()
{
	std::cout << "ScavTrap: < " << name <<
		" > has enterred in Gate Kepper mode" << std::endl;
}