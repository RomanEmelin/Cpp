#include "Converter.hpp"

Converter::Converter(const std::string &inputData): _inputData(inputData) {}


Converter::Converter(const Converter &copy) {

	*this = copy;
}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &copy) {

	if (this == &copy)
		return *this;
	_inputData = copy._inputData;
	return (*this);
}

void Converter::toChar() const {

	std::cout << "char: ";
	try {
		char c = static_cast<char>(std::stoi(_inputData));
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non desplayable" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}

void Converter::toInteger() const {

	std::cout << "int: ";
	try {
		std::cout << std::stoi(_inputData) << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}

void Converter::toFloat() const {

	std::cout << "float: ";
	try {
		std::cout << std::fixed << std::setprecision(1) << std::stof(_inputData) << "f" << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}

void Converter::toDouble() const {

	std::cout << "double: ";
	try {
		std::cout << std::fixed << std::setprecision(1) << std::stof(_inputData) << std::showpoint << std::endl;
	} catch (std::exception &e) {
		std::cout << "impossible" << std::endl;
	}
}

void Converter::doIt() const {

	toChar();
	toInteger();
	toFloat();
	toDouble();
}