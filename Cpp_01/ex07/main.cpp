#include "Replacer.hpp"

int main(int argc, const char *argv[]) {

	if (argc != 4)
		std::cout << RED << "Error: " << GREEN << "invalid number of arguments." << std::endl;
	else {
		Replacer replace;
		try {
			replace.stringReplacer(argv[1], argv[2], argv[3]);
		} catch (const char *e){
			std::cout << "IM HERE!" << std::endl;
			std::cerr << RED << "Error: " << e << ENDC << std::endl;
		}
	}
	return (0);
}

