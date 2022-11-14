#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class   Zombie
{
	private:
	std::string name;

	public:
	~Zombie() {
		std::cout<< name << " destoyed!" <<std::endl;
	};
	void setname(std::string str);
	void announce(void);
};

Zombie*    zombieHorde( int N, std::string name );

#endif