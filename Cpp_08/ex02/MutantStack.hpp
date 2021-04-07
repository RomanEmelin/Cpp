#include <stack>
#include <iostream>
#include <list>
#include <string>
#include <deque>
#include <iostream>

#ifndef CPP_MUTANTSTACK_H
#define CPP_MUTANTSTACK_H

template<class T>
class MutantStack: public std::stack<T> {

public:
	MutantStack(): std::stack<T>() {};
	MutantStack(MutantStack const &other): std::stack<T>(other) {};

	virtual ~ MutantStack() {};

	MutantStack &operator = (MutantStack const &other) {
		*this = other;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() {return this->c.begin();};
	reverse_iterator rbegin() {return this->c.begin();};
	const_iterator begin() const {return this->c.begin();};
	const_reverse_iterator rbegin() const {return this->c.rbegin();};
	iterator end() {return this->c.end();};
	reverse_iterator rend() {return this->c.rend();};
	const_iterator end() const {return this->c.end();};
	const_reverse_iterator rend() const {return this->c.rend();};
};


#endif //CPP_MUTANTSTACK_H
