#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed {

private:
	int 			_valueStore;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed& operator = (const Fixed& copy);
	int getRawBits()const;
	void setRawBits(const int raw);
	float toFloat() const;
	int toInt()const;
};

std::ostream& operator << (std::ostream &out, Fixed const &_valueStore);

#endif
