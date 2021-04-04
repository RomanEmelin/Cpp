#include "Intern.hpp"

Intern::Forms::Forms(const std::string &name, Form *(*function)(const std::string &)):
	_name(name), _function(function) {}

Intern::Forms::Forms(Forms const &copy): _name(copy._name), _function(copy._function) {}

Intern::Forms &Intern::Forms::operator = (Forms const &copy) {

	(void)copy;
	return (*this);
}

Intern::Forms::~Forms() {}
bool Intern::Forms::isForm(const std::string &name) {

	return (this->_name == name);
}

Form *Intern::Forms::execute(const std::string &target) const {

	return ((this->_function)(target));
}

Intern::Intern() {

	this->_forms[0] = new Intern::Forms("Presidential Pardon", PresidentialPardonForm::generateForm);
	this->_forms[1] = new Intern::Forms("Robotomy Request", RobotomyRequestForm::generateForm);
	this->_forms[2] = new Intern::Forms("Shrubbery Creation", ShrubberyCreationForm::generateForm);
}

Intern::Intern(Intern const &copy) {

	(void)copy;
}

Intern::~Intern() {

	for (int i = 0; i < 3; i++)
		delete this->_forms[i];
}

Intern &Intern::operator = (Intern const &copy) {

	(void)copy;
	return (*this);
}

const char* Intern::FormDoesNotExistException::what() const throw() {

	return "\x1B[31mIntern exception: form does not exist.\x1B[0m";
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const {

	Form *form = nullptr;

	for (int i = 0; i < 3 && !form; i++)
		this->_forms[i]->isForm(formName) ? form = this->_forms[i]->execute(target) : 0;
	if (!form)
		throw FormDoesNotExistException();
	std::cout << SKYBLUE << " Intern creates " << ENDC << *form << std::endl;
	return (form);
}

