#include "Fixed.hpp"

Fixed::Fixed() {

	this->_valueStore = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {

	this->_valueStore = (value << this->_fractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) {

	this->_valueStore = roundf(value * (1 << this->_fractionalBits));
	std::cout << "Float constructor caller" << std::endl;
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

		std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_valueStore);
}

void Fixed::setRawBits(const int raw) {

	this->_valueStore = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat() const {

	return (static_cast<float>(this->_valueStore) / static_cast<float>(1 << this->_fractionalBits));
}

int Fixed::toInt() const {

	return (this->_valueStore >> this->_fractionalBits);
}

std::ostream& operator << (std::ostream &out, Fixed const &_valueStore) {

	out << _valueStore.toFloat();
	return (out);
}