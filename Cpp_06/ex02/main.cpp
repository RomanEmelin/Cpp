#include <iostream>
#include <string>


class Base {
public:
	virtual ~Base(){};
};

class A: public Base{};


class B: public Base{};

class C: public Base{};

Base *generate() {

	switch (rand() % 3) {
		case 0:
			std::cout << "Class A generate" << std::endl;
			return new A;
		case 1:
			std::cout << "Class B generate" << std::endl;
			return new B;
		case 2:
			std::cout << "Class C generate" << std::endl;
			return new C;
	}
	return nullptr;
}

void identify_from_pointer(Base *p) {

	if (dynamic_cast<A *>(p))
		std::cout << "It's class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "It's class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "It's class C" << std::endl;
}

void identify_from_refernce(Base &p) {

	if (dynamic_cast<A *>(&p))
		std::cout << "It's class A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "It's class B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "It's class C" << std::endl;
}

int main() {

	srand(time(0));

	int k = rand() % 10;
	for (int i = 0; i < k; i++) {
		Base *base = generate();
		identify_from_pointer(base);
		identify_from_refernce(*base);
		//delete base;
		std::cout << "<+========================+>" << std::endl;
	}
	return 0;
}

