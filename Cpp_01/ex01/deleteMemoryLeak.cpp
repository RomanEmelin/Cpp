#include <iostream>
#include <string>

void deleteLeak() {

	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete(panther);
	std::cout << "\x1B[31mLeak deleted.\x1B[0m" << std::endl;
}

int main() {

	deleteLeak();
	while (1);
	return (0);
}

