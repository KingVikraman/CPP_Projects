#include "../includes/ScalarConverter.hpp"

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

SConv::~SConv();
{

};

void SConv::convert(const std::string &input)
{
	if(input.length() == 3 && input[0] == '\'' && input[2] == '\'')
	{
		//It;s a Char.
		char c = input[1];
		std::cout << "char: '" << c << "'" << std::endl;
		//TODO : convert the char and print.
	}
	else if (input[input.length() - 1] == 'f')
	{
		// if(input.find('.') != std::string::npos)
		// {

		// }
	}
	else if (input.find('.') != std::string::npos || input == "nan" || input == "+inf" || input == "-inf"
			|| input == "inf")
	{
		// Is it a double?
	}
	else
	{
		//is it a int?
	}

}