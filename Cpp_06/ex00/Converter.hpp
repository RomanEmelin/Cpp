#ifndef CPP_CONVERTER_H
#define CPP_CONVERTER_H

#include <iostream>
#include <string>

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"
#define SKYBLUE "\x1B[36m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"

class Converter {

private:
	Converter();

	std::string _inputData;

};


#endif //CPP_CONVERTER_H
