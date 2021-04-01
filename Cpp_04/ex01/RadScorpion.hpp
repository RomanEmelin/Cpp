#ifndef CPP_RADSCORPION_HPP
#define CPP_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion: public Enemy {

private:
	RadScorpion();

public:
	RadScorpion(int hp, std::string const &type);
	RadScorpion(RadScorpion const &copy);
	RadScorpion &operator = (RadScorpion const &copy);

	~RadScorpion();

	void takeDamage(int damage);

};


#endif
