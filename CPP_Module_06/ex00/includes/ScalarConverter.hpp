/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 19:27:34 by rvikrama          #+#    #+#             */
/*   Updated: 2025/12/08 19:28:59 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <iomanip>	

enum LiteralType {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
} ;

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();

		static bool isChar(std::string &literal);
		static bool isInt(std::string &literal);
		static bool isFloat(std::string &literal);
		static bool isDouble(std::string &literal);

		static LiteralType detectType (std::string &literal);

		static void printConv(char c, long i, float f, double d);
		// static void fromChar(std::string &literal);
		// static void fromInt(std::string &literal);
		// static void fromFloat(std::string &literal);
	public:
		static void convert(std::string &literal);
};









// #include <iostream>
// #include <string>
// #include <limits>
// #include <cstdlib>
// #include <iomanip>
// #include <cmath>

// class SConv
// {
// 	private:
// 		SConv();
// 		SConv(const SConv &other);
// 		SConv &operator=(const SConv &other);
// 		~SConv();
// 	public:
// 		static void convert(const std::string &input);
// };

// #endif
