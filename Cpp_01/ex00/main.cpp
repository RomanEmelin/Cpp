#include "Pony.hpp"

void ponyOnTheHeap() {
	Pony* pony = new Pony();
	pony->setPonyData("Pain", "Pink", 5);
	std::cout << RED <<"Hola! My name is " << ENDC;
	std::cout << GREEN << pony->getName() << ENDC << std::endl;
	std::cout << RED << "\x1B[226mI'm a " << GREEN << "Pony!" << ENDC << std::endl;
	std::cout << RED << "I " << ENDC;
	std::cout << GREEN << pony->getAge() << ENDC;
	std::cout << RED <<" years old!" ENDC << std::endl;
	std::cout << RED << "I have a " << ENDC;
	std::cout << PURPLE << pony->getColor() << ENDC;
	std::cout << RED <<" skin color!" ENDC << std::endl;
	delete(pony);
}

void ponyOnTheStack() {
	Pony pony = Pony();
	pony.setPonyData("Envy", "Gray", 18);
	std::cout << "Hola! My name is " << PURPLE << pony.getName() << ENDC << std::endl;
	std::cout << "I'm a " << PURPLE << "Pony!" << ENDC << std::endl;
	std::cout << "I " << PURPLE << pony.getAge() << ENDC << " years old!" << std::endl;
	std::cout << "I have a " << GRAY << pony.getColor() << ENDC << " skin color!" << std::endl;
}

int main() {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}

