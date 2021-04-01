#ifndef CPP_SUPERMUTANT_H
#define CPP_SUPERMUTANT_H
#include "Enemy.hpp"

class SuperMutant: public Enemy{

private:
	SuperMutant();

public:
	SuperMutant(int hp, std::string const &type);
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator = (SuperMutant const &copy);

	~SuperMutant();

	void takeDamage(int damage);
};


#endif //CPP_SUPERMUTANT_H
