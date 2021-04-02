#ifndef CPP_VICTIM_HPP
#define CPP_VICTIM_HPP
#include <iostream>
#include <string>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class Victim {


protected:
	Victim();
	std::string _name;

public:
	Victim(std::string name);
	Victim(const Victim &copy);
	virtual ~Victim();

	Victim &operator = (const Victim &copy);

	std::string const &getName() const;
	virtual void getPolymorphed()const;
};

std::ostream &operator << (std::ostream &out, const Victim &victim);

#endif
