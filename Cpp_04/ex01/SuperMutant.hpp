#ifndef CPP_SUPERMUTANT_H
#define CPP_SUPERMUTANT_H
#include "Enemy.hpp"

class SuperMutant: public Enemy{

public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant &operator = (SuperMutant const &copy);

	~SuperMutant();

	void takeDamage(int damage);
};


#endif //CPP_SUPERMUTANT_H
