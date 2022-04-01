#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
private:

	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_phoneNumber;
	std::string		_darkestSecret;
	int				_order;

public:

	Contact();
	~Contact();

	std::string		getFirstName() const;
	std::string		getLastName() const;
	std::string		getNickname() const;
	std::string		getPhoneNumber() const;

	void 			setFirstName(std::string firstName);
	void 			setLastName(std::string lastName);
	void 			setNickname(std::string nickname);
	void 			setPhoneNumber(std::string phoneNumber);
	void 			setDarkSecret(std::string darkSecret);
	void			setOrder(int order);
	void 			printContact(int index) const;

	int				getOrder() const;
};

std::string 	_checkLength(std::string str);

#endif