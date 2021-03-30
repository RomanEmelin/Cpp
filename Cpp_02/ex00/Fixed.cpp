#include "Fixed.hpp"

Fixed::Fixed() {

	this->_valueStore = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy): _valueStore(copy._valueStore){

	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& copy) {

	this->_valueStore = copy._valueStore;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

Fixed::~Fixed() {

		std::cout << "destructor called" << std::endl;
}

int Fixed::getRawBits()const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_valueStore);
}

void Fixed::setRawBits(const int raw) {

	this->_valueStore = raw;
	std::cout << "setRawBits member function called" << std::endl;
}