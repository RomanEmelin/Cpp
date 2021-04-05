#ifndef CPP_SHRUBBERYCREATIONFORM_H
#define CPP_SHRUBBERYCREATIONFORM_H
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm: public Form {

private:
	ShrubberyCreationForm();

	std::string const _target;
	static std::string const _tree[28];

public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);

	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);

	class TargetOpenFileException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class WriteToFileException : public std::exception
	{
		virtual const char *what() const throw();
	};
	static std::string const &_name;
	void execute(Bureaucrat const &executor) const;
	static Form *generateForm(const std::string &target);
	void action() const;
};
#endif
