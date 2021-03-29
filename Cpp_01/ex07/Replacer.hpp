#ifndef CPP_REPLACER_HPP
#define CPP_REPLACER_HPP
#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class Replacer {

private:
	std::ofstream	_newFile;
	std::ifstream 	_file;

	std::string replace(const std::string &searchString, const std::string &replaceString,
					 const std::string &line);

public:
	Replacer();
	~Replacer();
	void stringReplacer(const std::string &file, const std::string &searchString,
						const std::string &replaceString);
};


#endif
