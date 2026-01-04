#include "bigint.hpp"

bigint::bigint() : digits(1,0)
{

}

bigint::bigint(unsigned long long n)
{
	if(n == 0)
		digits.push_back(0);
	while(n)
	{
		digits.push_back(n % 10);
		n /= 10;
	}
}

bigint::bigint(const std::string &s)
{
	for(int i = s.size() - 1; i >= 0;i--)
	{
		if(std::isdigit(s[i]))
			digits.push_back(s[i] - '0');
	}
	if(digits.empty())
		digits.push_back(0);
	trim();
}

bigint::bigint(const bigint &other) : digits(other.digits)
{

}

bigint &bigint::operator=(const bigint &other)
{
	if(this != &other)
		digits = other.digits;
	return(*this);
}

bigint::~bigint()
{

}

void bigint::trim()
{
	while(digits.size() > 1 && digits.back() == 0)
		digits.pop_back();
}

int bigint::to_int() const
{
	long long res = 0;
	
	for(int i = digits.size() - 1; i >= 0; i--)
	{
		res = res * 10 + digits[i];
		if(res > INT_MAX)
			return(INT_MAX);
	}
	return(res);
}

bigint bigint::operator++(int)
{
	bigint temp = *this;

	++(*this);
	return(temp);
}

bigint &bigint::operator++()
{
	*this = *this + bigint(1);
	return(*this);
}

bigint &bigint::operator+=(const bigint &other)
{
	*this = *this + other;
	return(*this);
}

bigint bigint::operator+(const bigint &other) const
{
	bigint res;
	int carry = 0;
	int sum = 0;
	size_t size = std::max(digits.size(), other.digits.size());
	res.digits.clear();

	for(size_t i = 0; i < size || carry; i++)
	{
		sum = carry;
		if(i < digits.size())
			sum += digits[i];
		if(i < other.digits.size())
			sum += other.digits[i];
		res.digits.push_back(sum % 10);
		carry = sum / 10;
	}
	res.trim();
	return(res);
}

bigint bigint::operator<<(int shift) const
{
	if(*this == bigint(0))
		return(bigint(0));
	bigint res = *this;
	res.digits.insert(res.digits.begin(), shift, 0);
	return(res);
}

bigint bigint::operator>>(int shift) const
{
	bigint res = *this;
	if(shift >= (int)res.digits.size())
		return(bigint(0));
	res.digits.erase(res.digits.begin(), res.digits.begin() + shift);
	return(res);
}

bigint bigint::operator<<(const bigint &other) const
{
	bigint temp = *this;

	temp <<= other;
	return(temp);
}

bigint bigint::operator>>(const bigint &other) const
{
	bigint temp = *this;

	temp >>= other;
	return(temp);
}

bigint &bigint::operator<<=(int shift)
{
	*this = *this << shift;
	return(*this);
}

bigint &bigint::operator>>=(int shift)
{
	*this = *this >> shift;
	return(*this);
}

bigint &bigint::operator>>=(const bigint &other)
{
	*this >>= other.to_int();
	return(*this);
}

bigint &bigint::operator<<=(const bigint &other)
{
	*this <<= other.to_int();
	return(*this);
}

bool bigint::operator<(const bigint &other) const
{
	if(digits.size() != other.digits.size())
		return(digits.size() < other.digits.size());

	for(int i = digits.size() - 1; i >= 0; i--)
	{
		if(digits[i] != other.digits[i])
			return(digits[i] < other.digits[i]);
	}
	return(false);
}

bool bigint::operator>(const bigint &other) const
{
	if(digits.size() != other.digits.size())
		return(digits.size() > other.digits.size());

	for(int i = digits.size() - 1; i >= 0; i--)
	{
		if(digits[i] != other.digits[i])
			return(digits[i] > other.digits[i]);
	}
	return(false);
}

bool bigint::operator<=(const bigint &other) const
{
	return(!(*this > other));
}

bool bigint::operator>=(const bigint &other) const
{
	return(!(*this < other));
}

bool bigint::operator==(const bigint &other) const
{
	if(digits.size() != other.digits.size())
		return(false);
	for(size_t i = 0; i < digits.size(); i++)
	{
		if(digits[i] != other.digits[i])
			return(false);
	}
	return(true);
}

bool bigint::operator!=(const bigint &other) const
{
	return(!(*this == other));
}

std::ostream &operator<<(std::ostream &os, const bigint &b)
{
	bigint temp = b;
	temp.trim();

	for(int i = temp.digits.size() - 1; i >= 0; i--)
		os << temp.digits[i];
	return(os);
}