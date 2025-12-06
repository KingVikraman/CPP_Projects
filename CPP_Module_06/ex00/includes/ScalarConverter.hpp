#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include <cmath>

class scaleCoverter
{
	private:
		SConv();
		SConv(const SConv &other);
		SConv &operator=(const SConv &other);
		~SConv();
	public:
		static void convert(const std::string &input);
};

#endif
