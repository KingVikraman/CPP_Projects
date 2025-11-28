#include "vect2.hpp"


vect2::vect2() : x_value(0), y_value(0)
{

};

vect2::vect2(int x_dup, int y_dup) : x_value(x_dup), y_value(y_dup)
{

};

vect2::vect2(const vect2 &clone) : x_value(clone.x_value), y_value(clone.y_value)
{

};

vect2::~vect2()
{

};


vect2 &vect2::operator = (const vect2 &other)
{
	if (this != &other)
	{
		x_value = other.x_value;
		y_value = other.y_value;
	}
	return *this;
}

vect2 &vect2::operator += (const vect2 &other)
{
	x_value += other.x_value;
	y_value += other.y_value;
	return *this;
}

vect2 &vect2::operator -= (const vect2 &other)
{
	x_value -= other.x_value;
	y_value -= other.y_value;
	return *this;
}

vect2 &vect2::operator *= (const int scalar)
{
	x_value *= scalar;
	y_value *= scalar;
	return *this;
}

vect2 vect2::operator + () const
{
	return *this;
}

vect2 vect2::operator - () const
{
	return vect2(-x_value, -y_value);
}

vect2 &vect2::operator++()
{
	x_value++;
	y_value++;
	return *this;
}

vect2 vect2::operator++(int)
{
	vect2 old = *this;
	x_value ++;
	y_value ++;
	return old;
}

vect2 &vect2::operator -- ()
{
	x_value --;
	y_value --;
	return *this;
}

vect2 vect2::operator -- (int)
{
	vect2 old = *this;
	x_value --;
	y_value --;
	return old;
}

bool vect2::operator == (const vect2 &other) const
{
	if (this->x_value == other.x_value && this->y_value == other.y_value)
		return true;
	return false;
}

bool vect2::operator != (const vect2 &other) const
{
	if (*this == other)
		return false;
	return true;
}

vect2 vect2::operator + (const vect2 &other) const
{
	int x_dup = this->x_value + other.x_value;
	int y_dup = this->y_value + other.y_value;

	return (vect2(x_dup, y_dup));
}

vect2 vect2::operator - (const vect2 &other) const
{
	int x_dup = this->x_value - other.x_value;
	int y_dup = this->y_value - other.y_value;

	return (vect2(x_dup, y_dup));
}

vect2 vect2::operator * (const int scalar) const
{
	int x_dup = this->x_value * scalar;
	int y_dup = this->y_value * scalar;

	return (vect2(x_dup, y_dup));
}

int &vect2::operator [] (int i)
{
	if (i == 0)
		return x_value;
	return y_value;
}


const int &vect2::operator [] (int i) const
{
	if (i == 0)
		return x_value;
	return y_value;
}

std::ostream &operator << (std::ostream &os, const vect2 &vect)
{
	os << "{" << vect.x_value << "," << vect.y_value << "}";
	return os;
}

vect2 operator * (const int scalar, const vect2 &other)
{
	return (other * scalar);
}