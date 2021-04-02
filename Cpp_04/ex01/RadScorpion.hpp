#ifndef CPP_RADSCORPION_HPP
#define CPP_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion: public Enemy {

public:
	RadScorpion();
	RadScorpion(RadScorpion const &copy);
	RadScorpion &operator = (RadScorpion const &copy);

	~RadScorpion();

	void takeDamage(int damage);

};


#endif
