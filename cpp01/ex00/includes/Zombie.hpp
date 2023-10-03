#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
public:
	void announce( void );
	Zombie(std::string name);
	~Zombie( void );
};

	void randomChump( std::string name );
	Zombie* newZombie( std::string name );

#endif