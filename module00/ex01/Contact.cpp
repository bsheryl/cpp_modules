#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

std::string	Contact::getFirstName() const {
	return this->_firstName;
}

std::string Contact::getLastName() const {
	return this->_lastName;
}

std::string Contact::getNickname() const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber() const {
	return this->_phoneNumber;
}

int Contact::getOrder() const {
	return this->_order;
}

void Contact::setFirstName(std::string firstName) {
	this->_firstName = _checkLength(firstName);
}

void Contact::setLastName(std::string lastName) {
	this->_lastName = _checkLength(lastName);
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = _checkLength(nickname);
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = _checkLength(phoneNumber);
}

void Contact::setDarkSecret(std::string darkestSecret) {
	this->_darkestSecret = _checkLength(darkestSecret);
}

void Contact::setOrder(int order) {
	this->_order = order;
}

void Contact::printContact(int index) const {
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << this->getFirstName() << "|";
	std::cout << std::setw(10) << this->getLastName() << "|";
	std::cout << std::setw(10) << this->getNickname() << std::endl;
}

std::string _checkLength(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}