#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_count = 0;
	this->_lastOrder = 0;
}

PhoneBook::~PhoneBook(void) {

}

void PhoneBook::addNewContact() {
	Contact newContact;
	std::string input;
	int minOrder;

	while (input.length() == 0) {
		std::cout << "Input first name: ";
		std::getline(std::cin, input);
		if (input.length() == 0) {
			std::cout << "Incorrect data. Try again" << std::endl;
			std::cout << std::endl;
		}
	}
	newContact.setFirstName(input);
	input = "";
	while (input.length() == 0) {
		std::cout << "Input last name: ";
		std::getline(std::cin, input);
		if (input.length() == 0) {
			std::cout << "Incorrect data. Try again" << std::endl;
			std::cout << std::endl;
		}
	}
	newContact.setLastName(input);
	input = "";
	while (input.length() == 0) {
		std::cout << "Input nickname: ";
		std::getline(std::cin, input);
		if (input.length() == 0) {
			std::cout << "Incorrect data. Try again" << std::endl;
			std::cout << std::endl;
		}
	}
	newContact.setNickname(input);
	input = "";
	while (input.length() == 0) {
		std::cout << "Input number phone: ";
		std::getline(std::cin, input);
		if (input.length() == 0) {
			std::cout << "Incorrect data. Try again" << std::endl;
			std::cout << std::endl;
		}
	}
	newContact.setPhoneNumber(input);
	input = "";
	while (input.length() == 0) {
		std::cout << "Input darkest secret: ";
		std::getline(std::cin, input);
		if (input.length() == 0) {
			std::cout << "Incorrect data. Try again" << std::endl;
			std::cout << std::endl;
		}
	}
	newContact.setDarkSecret(input);
	input = "";
	newContact.setOrder(this->_lastOrder);
	this->_lastOrder++;
	if (this->_count < 8) {
		this->_array[this->_count] = newContact;
		this->_count++;
	} else {
		minOrder = this->_array[0].getOrder();
		for (int i = 0; i < this->_count; i++) {
			if (this->_array[i].getOrder() < minOrder) {
				minOrder = this->_array[i].getOrder();
			}
		}
		this->_array[minOrder] = newContact;
	}
}

void PhoneBook::search() const {
	std::string		input;
	int				index;

	while (input.length() == 0) {
		std::cout << "Input index: ";
		std::getline(std::cin, input);
		if (input.length() == 0) {
			std::cout << "Incorrect data. Try again" << std::endl;
			std::cout << std::endl;
		} else if (std::isdigit(input.c_str()[0])) {
			index = std::atoi(input.c_str());
			if (index >= 0 && index < this->_count) {
				this->_array[index].printContact(index);
				break;
			}
		} else {
			std::cout << "Incorrect index" << std::endl;
			break;
		}
	}
}