#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP
#include <string>
#include <iomanip>
#include <iostream>

class Contact {

private:
	int index;
	static std::string fieldsName[11];
	std::string	data[11];
	enum contactData {
		firstName,
		lastName,
		nickName,
		login,
		postalAddress,
		emailAddress,
		phoneNumber,
		birthdayDate,
		favoriteMeal,
		underwearColor,
		darkestSecret
	};

public:
	Contact();
	bool setData(int index);
	void getContactInTable();
	void getAllContact();
};

#endif
