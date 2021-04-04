#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::_name = std::string("Shrubbery form");

std::string const ShrubberyCreationForm::_tree[28] = {
"                                       .",
"                                              .         ;  ",
"                 .              .              ;%     ;;   ",
"                   ,           ,                :;%  %;   ",
"                    :         ;                   :;%;'     .,   ",
"           ,.        %;     %;            ;        %;'    ,;",
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'",
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' ",
"               ;%;      %;        ;%;        % ;%;  ,%;'",
"                `%;.     ;%;     %;'         `;%%;.%;'",
"                 `:;%.    ;%%. %@;        %; ;@%;%'",
"                    `:%;.  :;bd%;          %;@%;'",
"                      `@%:.  :;%.         ;@@%;'   ",
"                        `@%.  `;@%.      ;@@%;         ",
"                          `@%%. `@%%    ;@@%;        ",
"                            ;@%. :@%%  %@@%;       ",
"                              %@bd%%%bd%%:;     ",
"                                #@%%%%%:;;",
"                                %@@%%%::;",
"                                %@@@%(o);  . '         ",
"                                %@@@o%;:(.,'         ",
"                            `.. %@@@o%::;         ",
"                               `)@@@o%::;         ",
"                                %@@(o)::;        ",
"                               .%@@@@%::;         ",
"                               ;%@@@@%::;.          ",
"                              ;%@@@@%%:;;;. ",
"                          ...;%@@@@@%%:;;;;,.."};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form(ShrubberyCreationForm::_name, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
	Form(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &copy) {

	(void)copy;
	return (*this);
}

const char *ShrubberyCreationForm::TargetOpenFileException::what() const throw() {

	return "\x1B[31mShrubberyCreationForm exception: can't open file.\x1B[0m";
};

const char *ShrubberyCreationForm::WriteToFileException::what() const throw() {

	return "\x1B[31mShrubberyCreationForm exception: can't write to file.\x1B[0m";
};

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	Form::execute(executor);
	std::ofstream file;

	file.open(this->_target + "_shrubbery", std::ios::trunc);
	if (!file.is_open())
		throw ShrubberyCreationForm::TargetOpenFileException();
	for (int i = 0; i < 28; i++) {

		file << ShrubberyCreationForm::_tree[i] << std::endl;
	}
	file.close();
}