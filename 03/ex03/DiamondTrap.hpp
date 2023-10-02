#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap( std::string Name );
		DiamondTrap( const DiamondTrap &src );
		~DiamondTrap();
		DiamondTrap & operator = ( const DiamondTrap &rhs );
		void	attack( std::string const & target );
		void	whoAmI();
	
	private:
		std::string _name;
};


#endif
