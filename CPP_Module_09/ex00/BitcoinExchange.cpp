/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:18:08 by rvikrama          #+#    #+#             */
/*   Updated: 2026/05/28 21:47:52 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if(this != &other)
		this->_database = other._database;
	return(*this);
}

BitcoinExchange::~BitcoinExchange()
{

}

void BitcoinExchange::processInputFile(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	std::string line;
	if (!file.is_open())
	{
		std::cerr << "Error: Input file failed to open." << std::endl;
		return;
	}
	
	std::getline(file, line);

	while (std::getline(file, line))
	{
		if(line.empty())
			continue;
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos)
		{
			std::cerr << "Error: bad input -> " << line << std::endl;
			continue;
		}
		std::string date = line.substr(0, pipePos - 1);
		std::string valueStr = line.substr(pipePos + 2);
		double value;
		if (!isValidValue(date))
		{
			std::cerr << "Error: Invalid date -> " << date << std::endl;
			continue;
		}
	}
}


bool BitcoinExchange::isValidDate(const std::string &date) const
{
	// ── 1. Length + separator check ──────────────────────────────
	if(date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Error: Ensure format is YYYY-MM-DD" << std::endl;
		return false;
	}
	
	// ── 2. All non-separator characters must be digits ───────────
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7) continue;
		if (!std::isdigit(date[i]))
		{
			std::cerr << "Error : Ensure that format is YYYY-MM-DD" << std::endl;
			return false;
		}
	}

	// ── 3. Parse ─────────────────────────────────────────────────
	int year = std::atoi(date.substr(0,4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	// ── 4. Range checks ──────────────────────────────────────────
	if (year < 2009 || month > 12 || month < 1)
	{
		std::cerr << "Error: Invalid date" << std::endl;
		return false;
	}

	// ── 5. Max days per month ────────────────────────────────────
	int maxDay;
	if (month == 2)
	{
		bool leapYear = false;
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			leapYear = true;
		if(leapYear == true)
			maxDay = 29;
		else
			maxDay = 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		maxDay = 30;
	else
		maxDay = 31;

	if (day > maxDay)
	{
		std::cerr << "Error: Invalid date" << std::endl;
		return false;
	}
	return true;
}

// bool BitcoinExchange::isValidValue(const std::string &value) const
// {
// 	double number = std::strtod(value.c_str(), NULL);
// 	if (number < 0)
// 	{
// 		std::cerr << "Error: not a positive number.\n" << std::endl;
// 		return false;
// 	}
// 	if (number > 1000)
// 	{
// 		std::cerr << "Error: too large number\n" << std::endl;
// 		return false;
// 	}
// 	return true;
// }

bool BitcoinExchange::isValidValue(const std::string &value) const
{
	std::stringstream ss(value);
	double number;
	char leftover;

	if(!(ss >> number) || (ss >> leftover))
	{
		std::cerr << "Error: Invalid number format." << std::endl;
		return false;
	}
	if (number < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	if (number > 1000)
	{
		std::cerr << "Error: too large number." << std::endl;
		return false;
	}
	return true;
}