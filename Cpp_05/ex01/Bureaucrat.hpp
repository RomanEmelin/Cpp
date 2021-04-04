#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP
#include <iostream>
#include <string>
class Bureaucrat;
#include "Form.hpp"

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"
#define SKYBLUE "\x1B[36m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"

class Bureaucrat {

private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	virtual ~Bureaucrat();

	Bureaucrat &operator = (Bureaucrat const &copy);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	int getGrade() const;
	std::string const &getName() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form) const;
};

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat);

#endif
