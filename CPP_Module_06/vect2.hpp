#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>
//#include <string>

class vect2
{
	private:
		int x_value;
		int y_value;

	public:
		vect2();
		vect2(int x_dup, int y_dup);
		vect2(const vect2 &clone);
		~vect2();

		vect2 &operator = (const vect2 &other);
		vect2 &operator += (const vect2 &other);
		vect2 &operator -= (const vect2 &other);
		vect2 &operator *= (const int scalar);

		vect2 operator + () const;
		vect2 operator - () const;

		vect2 &operator ++ ();
		vect2 operator ++ (int);

		vect2 &operator -- ();
		vect2 operator -- (int);

		bool operator == (const vect2 &other) const;
		bool operator != (const vect2 &other) const;

		int &operator [] (int i);
		const int &operator [] (int i) const;

		vect2 operator + (const vect2 &other) const;
		vect2 operator - (const vect2 &other) const;
		vect2 operator * (const  int scalar) const;

		friend std::ostream &operator << (std::ostream &os, const vect2 &v);
};

vect2 operator * (const int scalar, const vect2 &other);


#endif