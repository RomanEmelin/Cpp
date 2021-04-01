#ifndef CPP_ENEMY_H
#define CPP_ENEMY_H
#include <iostream>
#include <string>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define ENDC "\x1B[0m"
#define PURPLE "\x1B[35m"

class Enemy {

protected:
	Enemy();
	int _hp;
	std::string _type;

public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &copy);
	Enemy &operator = (Enemy const &copy);

	virtual ~Enemy();

	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};


#endif
