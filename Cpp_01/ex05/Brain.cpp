#include "Brain.hpp"

Brain::Brain() {

	std::cout << GREEN << "Brain is create!" << ENDC << std::endl;
}

Brain::~Brain() {

	std::cout << RED << "Brain is destroyed!" << ENDC << std::endl;
}

std::string Brain::identify() {

	std::stringstream	address;

	address << this;
	return (address.str());
}