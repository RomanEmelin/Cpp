#ifndef CPP_HUMAN_H
#define CPP_HUMAN_H
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

class Human {

private:
	Brain* _brain;

public:
	Human();
	~Human();
	std::string identify();
	Brain* getBrainAddress();
	std::string getHumanAddress();
};


#endif //CPP_HUMAN_H
