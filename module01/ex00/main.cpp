#include "Zombie.hpp"

int main() {
	Zombie zombie1("zombie1(stack)");
	Zombie* zombie2 = newZombie("zombie2(heap)");
	randomChump("zombie3");

	zombie1.announce();
	zombie2->announce();

	delete zombie2;
	return (0);
}