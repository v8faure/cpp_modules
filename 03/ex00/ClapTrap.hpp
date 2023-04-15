#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:
	std::string	name;
	int			hitpoints;
	int			energypoints;
	int			attackdamage;

	public:
	//constructors & destructor
	ClapTrap(std::string const _name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	//setters
	void setName(std::string const _name);
	void setHitpoints(int const _hitpoints);
	void setEnergypoints(int const _energypoints);
	void setAttackdamage(int const _attackdamage);
	//getters
	std::string getName() const;
	int getHitpoints() const;
	int getEnergypoints() const;
	int getAttackdamage() const;
	//operators
	ClapTrap & operator=(ClapTrap &other);
	//methods
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif