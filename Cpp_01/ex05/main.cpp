#include "Human.hpp"

int main() {

	Human takhir;

	std::cout << GREEN << ".indentify(): " << RED << takhir.identify() << ENDC << std::endl;
	std::cout << GREEN << ".getBrainAddress: " << RED << takhir.getBrainAddress()->identify() << ENDC << std::endl;
	std::cout << GREEN << ".getHumanAddress(): " << RED << takhir.getHumanAddress() << ENDC << std::endl;
	return (0);
}

