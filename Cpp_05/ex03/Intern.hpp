#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

class Intern {

private:
	class Forms {

	private:
		Forms();
		std::string const _name;
		Form *(*_function)(std::string const &);

	public:
		Forms(std::string const &name, Form *(*function)(std::string const &));
		Forms(Forms const &copy);
		virtual ~Forms();

		Forms &operator = (Forms const &copy);

		bool isForm(std::string const &name);
		Form *execute(std::string const &target) const;
	};

	Forms *_forms[3];

public:
	Intern();
	Intern(Intern const &copy);
	virtual ~Intern();

	class FormDoesNotExistException: public std::exception {
		virtual const char* what() const throw();
	};

	Intern &operator = (Intern const &copy);
	Form *makeForm(std::string const &formName, std::string const &target) const;
};

#endif
