#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->contactCounter = 0;
}

void PhoneBook::addContact() {

	if (this->contactCounter == 8) {
		std::cout << "\x1B[32mThe PhoneBook is full!\x1B[0m" << std::endl;
		return ;
	}
	this->contact[this->contactCounter].setData(this->contactCounter + 1);
	this->contactCounter++;
}

void PhoneBook::displayPhoneBook() {
	std::cout << "\x1B[40m_____________________________________________\x1B[0m" << std::endl;
	std::cout << "\x1B[40m|_____Index|First Name| Last Name|  Nickname|\x1B[0m" << std::endl;
	for (int i = 0; i < this->contactCounter; i++) {
		this->contact[i].getContactInTable();
	}
	std::cout << "\x1B[40m|___________________________________________|\x1B[0m" << std::endl;
}

void PhoneBook::searchContact() {

	int i;

	if (!this->contactCounter) {
		std::cout << "\x1B[32mNeed add a contact before searching!\x1b[0m" << std::endl;
		return;
	}
	this->displayPhoneBook();
	std::cout << "\x1B[32mEnter contact \x1B[33mindex \x1B[32mto print contact information or 0 to \x1B[33mExit." << std::endl;
	while (!(std::cin >> i) || (i < 0 || i > this->contactCounter)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (std::cin.eof())
			exit(1);
		std::cout << "\x1b[32mError! Invalid \x1B[31mindex\x1B[0m!" << std::endl;
		std::cout << "\x1b[32mEnter valid \x1B[31mindex\x1B[0m!" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (i > 0)
		this->contact[i - 1].getAllContact();
}

