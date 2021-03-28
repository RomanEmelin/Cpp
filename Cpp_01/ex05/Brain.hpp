#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP
#include <iostream>
#include <string>
#include <sstream>

#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
#define ENDC "\x1B[0m"

class Brain {

private:

public:
	Brain();
	~Brain();
	std::string identify();
};

#endif
