#include "Span.hpp"
#include <stack>

int main() {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "<<+===================+>>" << std::endl;
	Span sp2 = Span(10000);
	srand(time(0));
	for (int i = 0; i < 10000; ++i)	{
		sp2.addNumber(rand() % 10000);
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	std::cout << "<<+===================+>>" << std::endl;
	for (int i = 0; i < 100; ++i) {

		std::cout << sp2[i] << std::endl;
	}
}

