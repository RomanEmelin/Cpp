#include "Span.hpp"

Span::Span(unsigned int size): _size(size) {}

Span::Span(Span const &other) {

	*this = other;
}

Span::~Span() {}

Span &Span::operator = (Span const &other) {

	if (this == &other)
		return *this;
	_size = other._size;
	_vectorArray = other._vectorArray;
	return *this;
}

int Span::longestSpan() {
	if (_vectorArray.empty())
		throw std::length_error("array is empty.");
	else {
		if (_vectorArray.size() > 1) {
			_sortedVectorArray = _vectorArray;
			std::sort(_sortedVectorArray.begin(), _sortedVectorArray.end());
			return (*--_sortedVectorArray.end() - *_sortedVectorArray.begin());
		} else {
			return (*_vectorArray.begin());
		}
	}
}

int Span::shortestSpan() {

	if (_vectorArray.empty())
		throw std::length_error("array is empty.");
	else {
		if (_vectorArray.size() > 1) {
			_sortedVectorArray = _vectorArray;
			std::sort(_sortedVectorArray.begin(), _sortedVectorArray.end());
			return (*++_sortedVectorArray.begin() - *_sortedVectorArray.begin());
		} else {
			return (*_vectorArray.begin());
		}
	}

}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if (static_cast<size_t>(end - begin) <= _size - _vectorArray.size())
		_vectorArray.insert(_vectorArray.end(), begin, end);
	else {
		_vectorArray.insert(_vectorArray.end(), begin, begin + (_size - _vectorArray.size()));
		throw std::out_of_range("out of range.");
	}
}


void Span::addNumber(int value) {

	if (_vectorArray.size() < _size)
		_vectorArray.push_back(value);
	else
		throw std::out_of_range("out of range.");
}

int &Span::operator[](const int index) {
	return _vectorArray[index];
}

int Span::getSize() const {
	return _vectorArray.size();
}