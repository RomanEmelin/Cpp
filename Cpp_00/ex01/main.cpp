#include "PhoneBook.hpp"
#include <string>
#include <iostream>

void 	helloPrompt(void)
{
	std::cout << "\x1B[32mWelcome to \x1B[31mAwesome PhoneBook!\x1B[0m\n";
	std::cout << "\x1B[32mUse:\n\x1B[31mADD\x1B[32m: for add contact.\n";
	std::cout << "\x1B[31mSEARCH\x1B[32m: to find contact.\n";
	std::cout << "\x1B[31mEXIT\x1B[32m: to exit \x1B[93mPhoneBook.\x1B[0m\n";
}

int		main(void) {

	bool running;
	std::string cmd;
	PhoneBook phoneBook;

	helloPrompt();
	running = true;
	while (running) {
		std::cout << "\x1B[33mEnter the command: \x1B[0m";
		if (!std::getline(std::cin, cmd)) {
			std::cout << "\x1B[32mThank you! \x1B[33mGoodbye!\x1B[0m" << std::endl;
			exit(1);
		}
		else if (cmd == "EXIT") {
			std::cout << "\x1B[32mThank you! \x1B[33mGoodbye!\x1B[0m" << std::endl;
			running = false;
		}
		else if (cmd == "ADD") {
			phoneBook.addContact();
		}
		else if (cmd == "SEARCH") {
			phoneBook.searchContact();
		}
		else
			std::cout << "\x1B[31mAttention! WRONG COMMAND!\x1B[0m\n";
	}
	return (0);
}

