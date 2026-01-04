#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>
#include <string>
#include <vector>
#include <climits>

#ifndef INTMAX
#define INTMAX INT_MAX
#endif

class bigint
{
	private:
		std::vector<int> digits;
		void	trim();
		int to_int() const;

	public:
		bigint();
		bigint(unsigned long long n);
		bigint(const std::string &s);
		bigint(const bigint &other);
		bigint &operator=(const bigint &other);
		~bigint();

		bigint &operator++();
		bigint operator++(int);

		bigint operator+(const bigint &other)const;
		bigint &operator+=(const bigint &other);

		bigint operator<<(int shift) const;
		bigint operator<<(const bigint &other) const;
		bigint operator>>(int shift) const;
		bigint operator>>(const bigint &other) const;

		bigint &operator<<=(int shift);
		bigint &operator<<=(const bigint &other);
		bigint &operator>>=(int shift);
		bigint &operator>>=(const bigint &other);

		bool operator<(const bigint &other)const;
		bool operator>(const bigint &other)const;
		bool operator<=(const bigint &other)const;
		bool operator>=(const bigint &other)const;
		bool operator==(const bigint &other)const;
		bool operator!=(const bigint &other)const;

		friend std::ostream &operator<<(std::ostream &os, const bigint &b);
};

#endif