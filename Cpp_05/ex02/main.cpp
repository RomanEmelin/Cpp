#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat takhir("takhir", 1);
	std::cout << takhir << std::endl;
	Bureaucrat georg("georg", 25);
	std::cout << georg << std::endl;

	Form *tree = new ShrubberyCreationForm("home");
	std::cout << *tree << std::endl;
	tree->beSigned(takhir);
	tree->execute(georg);

	Form *president = new PresidentialPardonForm("georg");
	std::cout << *president << std::endl;
	takhir.signForm(*president);
	president->execute(takhir);

	Form *c3PO = new RobotomyRequestForm("C3PO");
	std::cout << *c3PO << std::endl;
	c3PO->beSigned(takhir);
	c3PO->execute(georg);
	georg.executeForm(*c3PO);
	georg.executeForm(*c3PO);

	std::cout << "<+========================+>" << std::endl;

	try {
		georg.executeForm(*president);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<+========================+>" << std::endl;

	try {
		RobotomyRequestForm c3PO = RobotomyRequestForm("C3PO");
		std::cout << c3PO << std::endl;
		c3PO.execute(takhir);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<+========================+>" << std::endl;

	try	{
		PresidentialPardonForm president = PresidentialPardonForm("Georg");
		std::cout << president << std::endl;
		takhir.signForm(president);
		president.execute(georg);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<+========================+>" << std::endl;

	try {
		PresidentialPardonForm president = PresidentialPardonForm("Georg");
		std::cout << president << std::endl;
		takhir.signForm(president);
		georg.executeForm(president);
	}
	catch(std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	delete tree;
	delete president;
	delete c3PO;

	return (0);
}