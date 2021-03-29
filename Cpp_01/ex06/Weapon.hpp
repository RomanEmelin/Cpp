#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <iostream>
#include <string>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"

class Weapon {

private:
	std::string _type;

public:
	Weapon();
	Weapon(const std::string &weapon);
	~Weapon();
	void setType(const std::string &type);
	const std::string& getType()const;
};


#endif
