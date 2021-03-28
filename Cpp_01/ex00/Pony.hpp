#ifndef CPP_PONY_HPP
# define CPP_PONY_HPP
# include <string>
# include <iostream>
# include <iomanip>
# define GREEN "\x1B[32m"
# define RED "\x1B[31m"
# define YELLOW "\x1B[226m"
# define ENDC "\x1B[0m"
# define PURPLE "\x1B[35m"
# define GRAY "\x1B[37m"


class Pony {

private:
	std::string _color;
	std::string _name;
	int			_age;

public:
	Pony();
	~Pony();
	void setPonyData(std::string name, std::string color, int age);
	std::string getName();
	std::string getColor();
	int getAge();
};


#endif
