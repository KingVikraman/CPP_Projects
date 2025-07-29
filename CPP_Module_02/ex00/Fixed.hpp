#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed
{
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

};



// 🧠 Final Thoughts for You:

//  > Default constructor	= object is declared from scratch, no input.
//  > Copy constructor		= new object created from existing one.
//  > Copy assignment		= object already exists, just updates its internal state.

#endif