#ifndef CPP_ROBOTOMYREQUESTFORM_H
#define CPP_ROBOTOMYREQUESTFORM_H
#include "Form.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm: public Form {

private:
	RobotomyRequestForm();
	std::string const _target;

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);

	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);

	class FlipCoinException: public std::exception 	{
		virtual const char *what() const throw();
	};

	static std::string const &_name;
	void execute(Bureaucrat const &executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_H
