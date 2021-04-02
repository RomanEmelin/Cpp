#ifndef CPP_SORCERER_HPP
#define CPP_SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class Sorcerer {

private:
	Sorcerer();
	std::string _name;
	std::string _title;

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &copy);
	virtual ~Sorcerer();

	Sorcerer &operator = (const Sorcerer &copy);
	void polymorph(Victim const &victim) const;

	std::string const &getName() const;
	std::string const &getTitle() const;
};

std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer);

#endif
