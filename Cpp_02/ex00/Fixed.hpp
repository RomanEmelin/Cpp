#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>
#include <string>

class Fixed {

private:
	int 			_valueStore;
	static const int	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed& operator = (const Fixed& copy);
	int getRawBits()const;
	void setRawBits(const int raw);
};


#endif
