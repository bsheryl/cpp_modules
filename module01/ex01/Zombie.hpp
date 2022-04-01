#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie {
private:

	std::string _name;

public:

	Zombie();
	Zombie(std::string name);
	~Zombie(void);

	void announce(void) const;
	void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

//Zombie* newZombie(std::string name);
//void 	randomChump(std::string name);

#endif