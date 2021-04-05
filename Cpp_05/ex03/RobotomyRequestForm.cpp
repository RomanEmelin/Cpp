#include "RobotomyRequestForm.hpp"

std::string const &RobotomyRequestForm::_name = std::string("Robotomy Request");

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
		Form(RobotomyRequestForm::_name, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
		Form(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &copy) {

	(void)copy;
	return (*this);
}
void RobotomyRequestForm::action() const {

	std::cout << GREEN << "Woojuuuh! Beep beep..." << ENDC << std::endl;
	if (rand() % 2 == 0) {
		std::cout << GREEN << this->_target << ENDC;
		std::cout << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << RED << this->_target << ENDC;
		std::cout << " robotomized is failure." << std::endl;
	}
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {

	Form::execute(executor);
	action();
}

Form *RobotomyRequestForm::generateForm(const std::string &target) {

	return (new RobotomyRequestForm(target));
}