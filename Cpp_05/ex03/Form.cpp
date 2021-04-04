#include "Form.hpp"

Form::Form(std::string const &name, int const signGrade, int const executeGrade):
	_name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {

	if (_executeGrade < 1 || _signGrade < 1)
		throw Form::GradeTooHighException();
	else if (_executeGrade > 150 || _signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy):
		_name(copy._name), _signed(copy._signed), _signGrade(copy._signGrade), _executeGrade(copy._executeGrade) {

	if (_executeGrade < 1 || _signGrade < 1)
		throw Form::GradeTooHighException();
	else if (_executeGrade > 150 || _signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form &Form::operator = (Form const &copy) {

	this->_signed = copy._signed;
	return (*this);
}

const char *Form::UnsignedFormException::what() const throw() {

	return "\x1B[31mForm exception: Form is unsigned and can't be execute\x1B[0m";
}
const char *Form::FormAlreadySignedException::what() const throw() {

	return "\x1B[31mForm exception: Form is already signed\x1B[0m";
}

const char *Form::GradeTooHighException::what() const throw() {

	return "\x1B[31mForm exception: Grade too high\x1B[0m";
}

const char *Form::GradeTooLowException::what() const throw() {

	return "\x1B[31mForm exception: Grade too low\x1B[0m";
}

int Form::getSignGrade() const {
	 return (this->_signGrade);
}

int Form::getExecuteGrade() const {

	return (this->_executeGrade);
}

bool Form::isSigned() const {

	return (this->_signed);
}

void Form::beSigned(Bureaucrat const &bureaucrat) {

	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::FormAlreadySignedException();
	this->_signed = true;
}
std::string const &Form::getName() const {

	return (this->_name);
}

std::ostream &operator << (std::ostream &out, Form const &form) {

	out.clear();
	out << " form " << RED << form.getName() << ENDC;
	out << ", form is " << PURPLE << ((form.isSigned()) ? "Signed" : "Unsigned") << ENDC;
	out << ", sign grade: " << SKYBLUE << form.getSignGrade() << ENDC;
	out << ", execute grade: " << GREEN << form.getExecuteGrade() << ENDC << std::endl;
	return (out);
}

void Form::execute(Bureaucrat const &executor) const {

	if (executor.getGrade() > this->_executeGrade)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		throw Form::UnsignedFormException();
}