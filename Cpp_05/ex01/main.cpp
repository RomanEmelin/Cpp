#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Bureaucrat takhir("Takhir", 50);
	std::cout << takhir;

	Form diagnosisSheet(" Diagnosis sheet", 90, 50);
	std::cout << diagnosisSheet;
	diagnosisSheet.beSigned(takhir);
	std::cout << diagnosisSheet;

	std::cout << "<+==========+>" << std::endl;

	try {

		Form taxesSheet("Taxes sheet", 0, 10);
		std::cout << taxesSheet;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form taxesSheet("Taxes sheet", 20, 151);
		std::cout << taxesSheet;
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
}

