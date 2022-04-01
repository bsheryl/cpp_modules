#include "Zombie.hpp"

int main() {
	Zombie* zombie;
	std::string	name;
	std::string Nstr;
	int 		N;

	while (!std::cin.eof()) {
		std::cout << "Enter name zombie: ";
		std::getline(std::cin, name);
		if (name.length() == 0)
			std::cout << "Invalid name" << std::endl << std::endl;
		else
			break;
	}
	while (!std::cin.eof()) {
		std::cout << "Enter count of zombie: ";
		std::getline(std::cin, Nstr);
		if (Nstr.length() == 0)
			std::cout << "Invalid number N" << std::endl << std::endl;
		else
			break;
	}
	N = std::atoi(Nstr.c_str());
	zombie = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}