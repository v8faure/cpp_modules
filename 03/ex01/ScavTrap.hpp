#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap {
	public:
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap & copy);
	~ScavTrap();
	ScavTrap & operator = (const ScavTrap &other);
	void	attack( std::string const & target );
	void	guardgate();
};

#endif