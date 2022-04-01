#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen;

	if (argc != 2)
		std::cout << "Error: invalid number arguments."
			<< "Enter: ./karenFilter <DEBUG or INFO or WARNING or ERROR>" << std::endl;
	else {
		std::string level(argv[1]);
		karen.complain(level);
	}
	return (0);
}