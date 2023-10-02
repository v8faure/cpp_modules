
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Nobody";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

ClapTrap::ClapTrap( std::string Name )
{
	this->_name = Name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap: < " << this->_name << " > joinig The fight" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) { *this = src; }

ClapTrap::~ClapTrap()
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap: < " << this->_name << " > is Dead!" << std::endl;
	else
		std::cout << "ClapTrap: < " << this->_name << " > is leaving the fight!" << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap: < " << this->_name << " > attack " << target
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	int newHitPoint = this->_hitPoints - amount;
	if (newHitPoint <= 0)
		newHitPoint = 0;
	if (this->_hitPoints != 0)
	{
		std::cout << "ClapTrap: < " << this->_name << " > Take damage of " << amount << std::endl;
		std::cout << "ClapTrap: < " << this->_name << " > HitPoint get down from "
			<< this->_hitPoints << " to " << newHitPoint << std::endl;
		this->_hitPoints = newHitPoint;
		if (newHitPoint == 0)
			std::cout << "ClapTrap: < " << this->_name << " > is Dead!" << std::endl;
	}
	else
		std::cout << "ClapTrap: < " << this->_name << " > is Dead!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap: < " << this->_name << " > is Dead!" << std::endl;
	else
	{
		int newHitPoint = this->_hitPoints + amount;
		std::cout << "ClapTrap: < " << this->_name << " > adding " << amount << " to his HitPoint" << std::endl;
		std::cout << "ClapTrap: < " << this->_name << " > HitPoint get from "
			<< this->_hitPoints << " to " << newHitPoint << std::endl;
	}
}
