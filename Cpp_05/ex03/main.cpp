#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void) {

	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat crazyBob("Crazy Bob", 149);

	srand(time(0));
	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	} catch (std::exception const &e) {
		std::cerr << e.what() <<std::endl;
	}

	try {
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		rrf->beSigned(crazyBob);
		std::cout << ((rrf->isSigned() ? "signed" : "unsigned")) << std::endl;
		rrf->execute(crazyBob);
	} catch (std::exception const &e) {
		std::cerr << e.what() <<std::endl;
	}
	return (0);
}