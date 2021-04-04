#include "Bureaucrat.hpp"

int main() {

	Bureaucrat magnusTheRed("Magnus the Red", 50);
	std::cout << magnusTheRed << std::endl;
	magnusTheRed.incrementGrade();
	std::cout << magnusTheRed << std::endl;
	magnusTheRed.decrementGrade();
	std::cout << magnusTheRed << std::endl;

	try {
		Bureaucrat *takhirTheEconimist = new Bureaucrat("Takhir", 0);
		std::cout << *takhirTheEconimist << std::endl;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat takhirTheEconimist("Takhir", 150);
		std::cout << takhirTheEconimist << std::endl;
		takhirTheEconimist.decrementGrade();
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat *bureaucrat = new Bureaucrat("Tester", 10);
	std::cout << *bureaucrat << std::endl;
	delete bureaucrat;
	return (0);
}

