#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string Name );
		FragTrap( const FragTrap &src );
		~FragTrap();
		FragTrap & operator = ( const FragTrap &rhs );
		void	attack( std::string const & target );
		void	highFivesGuys( void );
};



#endif
