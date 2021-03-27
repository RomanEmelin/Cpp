#include "Contact.hpp"

std::string Contact::fieldsName[11] = {
		"First Name",
		"LastName",
		"Nickame",
		"Login",
		"Postal address",
		"Email address",
		"Phone number",
		"Birthday date",
		"Favorite meal",
		"Underwear color",
		"Darkest secret"
};

Contact::Contact() {

	for (int i = firstName; i <= darkestSecret; i++) {
		this->data[i] = std::string ();
	}
}

bool Contact::setData(int index) {

	this->index = index;
	std::cout << "Enter the following details.\n";
	for (int i = firstName; i <= darkestSecret; i++) {
		std::cout << Contact::fieldsName[i] << " ";
		if (!(std::getline(std::cin, this->data[i])))
			exit(1);
	}
	int dataLength = 0;
	for (int i = firstName; i <= darkestSecret; i++) {
		dataLength += this->data[i].length();
	}
	if (dataLength == 0) {
		std::cout << "\x1B[31mEntered empty contact, contact not added.\x1B[0m\n" << std::endl;
		return (false);
	}
	std::cout << "\x1B[32mContact added!\x1B[0m" << std::endl;
	return (true);
}

void Contact::getContactInTable() {

	std::cout << "\x1B[40m|\x1B[0m" << std::setw(10 ) << this->index;
	for (int i = firstName; i < login; i++) {
		std::cout << "\x1B[40m|\x1B[0m";
		if (this->data[i].length() > 10)
			std::cout << this->data[i].substr(0,9) << ".";
		else
			std::cout << std::setw(10) << this->data[i];
	}
	std::cout << "\x1B[40m|\x1B[0m" << std::endl;
}

void Contact::getAllContact() {

	std::cout << "\x1B[32mContact: " << "\x1B[33m" << this->index << "\x1B[0m" << std::endl;
	for (int i = firstName; i <= darkestSecret; i++) {
		std::cout << "\x1B[32m" << fieldsName[i] << ": ";
		std::cout << "\x1B[33m" << this->data[i] << "\x1b[0m" << std::endl;
	}
}