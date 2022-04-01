#include <iostream>
#include "PhoneBook.hpp"

int main() {

	PhoneBook phoneBook;
	std::string input;

	while (!std::cin.eof()) {
		std::cout << "Menu: " << std::endl;
		std::cout << "ADD: save a new contact" << std::endl;
		std::cout << "SEARCH: display a specific contact" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << std::endl;
		std::cout << "Input command: ";
		std::getline(std::cin, input);
		if (std::cin.eof()) {
			std::cout << std::endl << "Incorrect command" << std::endl
				<< std::endl;
			continue;
		}
		if (input == "ADD")
			phoneBook.addNewContact();
		else if (input == "SEARCH")
			phoneBook.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Incorrect command. Try again" << std::endl;
		std::cout << std::endl;
	}

	return (0);
}