#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP
#include <iostream>
#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form {

private:
	Form();

	std::string const	&_name;
	bool 				_signed;
	int const			_signGrade;
	int const			_executeGrade;

public:

	Form(std::string const &name, int const signGrade, int const executeGrade);
	Form(Form const &copy);
	virtual ~Form();

	Form &operator = (Form const &copy);

	class FormAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	int getSignGrade() const;
	int getExecuteGrade() const;
	bool isSigned() const;
	void beSigned(Bureaucrat const &bureaucrat);
	std::string const &getName() const;
};

std::ostream &operator << (std::ostream &out, Form const &form);

#endif //CPP_FORM_H
