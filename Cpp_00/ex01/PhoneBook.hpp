#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

private:
	Contact contact[8];
	int 	contactCounter;

public:
	PhoneBook();
	void addContact();
	void searchContact();
	void displayPhoneBook();
};


#endif //CPP_PHONEBOOK_H
