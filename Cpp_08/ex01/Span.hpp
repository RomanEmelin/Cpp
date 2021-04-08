#ifndef CPP_SPAN_H
#define CPP_SPAN_H
#include <vector>
#include <string>
#include <iostream>

class Span {

private:
	Span();
	unsigned int _size;
	std::vector<int> _vectorArray;
	std::vector<int> _sortedVectorArray;

public:
	Span(unsigned int size);
	Span(Span const & other);

	virtual ~Span();

	Span &operator = (Span const &other);
	void addNumber(int value);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan() ;
	int longestSpan() ;
	int &operator[](const int index);
	int getSize() const;
};


#endif
