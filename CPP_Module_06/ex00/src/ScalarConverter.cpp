#include "../includes/ScalarConverter.hpp"
#include <ostream>

SConv::SConv()
{

};

SConv::SConv(const SConv &other)
{
	(void)other;
};

SConv &SConv::operator=(const SConv &other)
{
	(void)other;
	return *this;
};

SConv::~SConv()
{

};

void SConv::convert(const std::string &input)
{
	if(input.length() == 3 && input[0] == '\'' && input[2] == '\'')
	{
		char c = input[1];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	}
	else if (input[input.length() - 1] == 'f')
	{
		float f = std::atof(input.c_str());
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else if (input.find('.') != std::string::npos || input == "nan" || input == "+inf" || input == "-inf"
			|| input == "inf")
	{
	 double d = std::atof(input.c_str());
	 std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	 std::cout << "int: " << static_cast<int>(d) << std::endl;
	 std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	 std::cout << "double: " << d << std::endl;
	}
	else
	{
		int num = std::atoi(input.c_str());
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl; 
		std::cout << "int: " << num << std::endl;
		std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(num) << std::endl;
	}
}