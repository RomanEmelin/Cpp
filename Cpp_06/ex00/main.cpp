#include "iostream"
#include <string>
#include "Converter.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {

		std::cerr << RED << "Error: bad arguments." << ENDC << std::endl;
		return (1);
	}
	else {
		Converter convert(argv[1]);
		std::cout << p << std::endl;
	}
	return (0)
}

