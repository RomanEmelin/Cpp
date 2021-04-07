#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "stack top " << mstack.top() << std::endl;
	std::cout << "Stack size " << mstack.size() << std::endl;
	std::cout << "Use pop, take value from stack" << std::endl;
	mstack.pop();

	std::cout << "stack size " << mstack.size() << std::endl;
	std::cout << "Make 3 stack push" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	std::cout << "Stack size " << mstack.size() << std::endl;
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "creat iterator pointing to stack begin " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "creat iterator pointing to stack end " << *ite << std::endl;
	while (it != mstack.end()) {
		std::cout << "now iterator here " << *it << std::endl;
		it++;
	}
	it = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

