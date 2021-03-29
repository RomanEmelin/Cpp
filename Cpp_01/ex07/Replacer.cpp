#include "Replacer.hpp"

Replacer::Replacer() {
	std::cout << GREEN << "Replacer is ready!" << ENDC << std::endl;
}

Replacer::~Replacer() {
	std::cout << GREEN << "Permuted!" << ENDC << std::endl;
}

std::string Replacer::replace(const std::string &searchString, const std::string &replaceString,
							  const std::string &line) {

	std::stringstream stringStream;
	unsigned long j;

	for (unsigned long i = 0; i < line.length(); i++) {

		for (j = 0; line[i + j] == searchString[j] && j < searchString.length(); j++) {

		}
		if (j == searchString.length()) {

			stringStream << replaceString;
			i += j - 1;
		}
		else
			stringStream << line[i];
	}
	return (stringStream.str());
}

void Replacer::stringReplacer(const std::string &file, const std::string &searchString,
							  	const std::string &replaceString) {

	std::string line;

	if (file.length() == 0)
		throw "Empty filename.";
	else if (searchString.length() == 0)
		throw "Empty searched string.";
	else if (replaceString.length() == 0)
		throw "Empty replace string.";
	this->_file.open(file);
	if (!this->_file.is_open())
		throw "Can't open file.";
	this->_newFile.open(file + ".replace", std::ios::trunc);
	if (!this->_newFile.is_open())
		throw "Can't create or open new file.";
	while (std::getline(this->_file, line)) {
		this->_newFile << Replacer::replace(searchString, replaceString, line);
		if (!this->_file.eof())
			this->_newFile << '\n';
	}
	this->_file.close();
	this->_newFile.close();
}