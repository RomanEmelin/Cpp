#include <iostream>
#include <string>

int main() {

	std::string str = "HI THIS IS BRAIN";
	std::string* strPointer = &str;
	std::string& strReference = str;

	std::cout << "\x1B[32mDisplay using \x1B[31mpointer:\x1B[0m " << *strPointer << std::endl;
	std::cout << "\x1B[32mDisplay using \x1B[31mreference:\x1B[0m " << strReference << std::endl;
}

