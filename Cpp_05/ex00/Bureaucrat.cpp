#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade):
		_name(name), _grade(grade) {

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy):
			_name(copy._name), _grade(copy._grade) {

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &copy) {

	this->_grade = copy._grade;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return "\x1B[31mBureaucrat exception: to low grade.\x1B[0m";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return "\x1B[31mBureaucrat exception: to high grade.\x1B[0m";
}

int Bureaucrat::getGrade() const {

	return this->_grade;
}

std::string const &Bureaucrat::getName() const {

	return this->_name;
}

void Bureaucrat::incrementGrade() {

	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {

	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat) {

	out << "I'm " << GREEN << bureaucrat.getName() << ENDC ;
	out << " I have a " << SKYBLUE << bureaucrat.getGrade() << ENDC << " grade." << std::endl;
	return out;
}