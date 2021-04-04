#ifndef CPP_PRESIDENTIALPARDONFORM_H
#define CPP_PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class PresidentialPardonForm: public Form {

private:
	PresidentialPardonForm();
	std::string const _target;

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);

	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

	static std::string const &_name;
	void execute(Bureaucrat const &executor) const;
	static Form *generateForm(const std::string &target);
};


#endif //CPP_PRESIDENTIALPARDONFORM_H
