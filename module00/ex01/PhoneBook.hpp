#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
private:

	Contact		_array[8];
	int			_count;
	int			_lastOrder;

public:

	PhoneBook();
	~PhoneBook();

	void	addNewContact();
	void	search() const;
};

#endif