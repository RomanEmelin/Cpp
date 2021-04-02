#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {

	std::cout << RED << this->_name << ENDC << ", ";
	std::cout << GREEN << this->_title << ENDC << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {

	std::cout << RED << this->_name << ENDC << ", ";
	std::cout << GREEN << this->_title << ENDC << ", is dead.";
	std::cout << " Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator = (const Sorcerer &copy) {

	this->_name = copy._name;
	this->_title = copy._title;
	return (*this);
}

Sorcerer::Sorcerer(const Sorcerer &copy) {

	*this = copy;
}

std::string const &Sorcerer::getName() const {

	return (this->_name);
}

std::string const &Sorcerer::getTitle() const {

	return (this->_title);
}

void Sorcerer::polymorph(const Victim &victim) const {

	victim.getPolymorphed();
}
std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer) {

	out << "I'm " << RED << sorcerer.getName() << ENDC << ", ";
	out << GREEN << sorcerer.getTitle() << ENDC <<", and I like ponies!" << std::endl;
	return (out);
}