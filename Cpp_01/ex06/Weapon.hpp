#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {

private:
	std::string _type;

public:
	Weapon();
	~Weapon();
	void setType(const std::string& type);
	const std::string& getType();
};


#endif
