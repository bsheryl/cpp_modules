#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombie;
	std::string	nameN;

	if (N < 1) {
		std::cout << "Invalid number N" << std::endl;
		return (NULL);
	}
	zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		nameN = name + std::to_string(i);
		zombie[i].setName(nameN);
	}
	return (zombie);
}