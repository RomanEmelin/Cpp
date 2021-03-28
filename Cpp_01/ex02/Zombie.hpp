#ifndef CPP_ZOMBIE_HPP
# define CPP_ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {

private:
	std::string _name;
	std::string _type;

public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
};


#endif //CPP_ZOMBIE_H
