/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:18:08 by rvikrama          #+#    #+#             */
/*   Updated: 2026/05/29 17:36:44 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <typeinfo>

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

static std::string trim(const std::string &s)
{
	size_t start = s.find_first_not_of(" \t\r\n");
	size_t end = s.find_last_not_of(" \t\r\n");
	if (start == std::string::npos || end == std::string::npos)
		return "";
	return s.substr(start, end - start + 1);
}

void BitcoinExchange::loadDatabase(const std::string &filename)
{
	// ── 1. Open file ──────────────────────────────────────────────
	std::ifstream file(filename.c_str());
	std::string line;

	if (!file.is_open())
	{
		std::cerr << "Error: database file failed to open." << std::endl;
		return;  // just return, no bool
	}

	// ── 2. Skip header ────────────────────────────────────────────
	std::getline(file, line);

	// ── 3. Read each line ─────────────────────────────────────────
	while (std::getline(file, line))
	{
		if (!line.empty() && line[line.size() - 1] == '\r')
			line.erase(line.size() - 1);
		// ── 4. Split by comma ─────────────────────────────────────
		std::string date;
		std::string rateStr;
		std::stringstream ss(line);
		
		if (!std::getline(ss, date, ',') || !std::getline(ss, rateStr))
			continue;

		date = trim(date);
		rateStr = trim(rateStr);

		if (!isValidDate(date))
			continue;
		// ── 5. Convert and store ──────────────────────────────────
		float rate = std::strtod(rateStr.c_str(), NULL);
		_database[date] = rate;
	}
	file.close();
}

void BitcoinExchange::processInputFile(const std::string &filename)
{
	// ── 1. Open file ──────────────────────────────────────────────
	std::ifstream file(filename.c_str());
	std::string line;
	if (!file.is_open())
	{
		std::cerr << "Error: Input file failed to open." << std::endl;
		return;
	}
	// ── 2. Skip header line ───────────────────────────────────────
	std::getline(file, line);
	// ── 3. Process each line ──────────────────────────────────────
	while (std::getline(file, line))
	{
		// ── 3a. Skip empty lines ──────────────────────────────────
		if(line.empty())
			continue;

		if (!line.empty() && line[line.size() -1] == '\r')
			line.erase(line.size() - 1);
		// ── 3b. Find pipe separator ───────────────────────────────
		size_t pipePos = line.find('|');
		if (pipePos == std::string::npos)
		{
			std::cerr << "Error: bad input -> " << line << std::endl;
			continue;
		}
		// ── 3c. Split into date and value ─────────────────────────
		std::string date = trim(line.substr(0, pipePos));
		std::string valueStr = trim(line.substr(pipePos + 1));
		// ── 3d. Validate date ─────────────────────────────────────
		if (!isValidDate(date))
		{
			std::cerr << "Error: Invalid date -> " << date << std::endl;
			continue;
		}
		// ── 3e. Validate value + parse it ─────────────────────────
		float value;
		if (!isValidValue(valueStr, value))
			continue;
		// ── 3f. Look up closest rate in database ──────────────────
		std::map<std::string, float>::const_iterator it = _database.lower_bound(date);
		if (it == _database.end() || it->first != date)
		{
			if(it == _database.begin())
			{
				std::cerr << "Error: No available rate for " << date << std::endl;
				continue;
			}
			--it;
		}
		// ── 3g. Print result ──────────────────────────────────────
		float rate = it->second;
		std::cout << date << " -> " << value << " = " << value * rate << std::endl;
	}
	file.close();
	return;
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
// 	float number = std::strtod(value.c_str(), NULL);
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

bool BitcoinExchange::isValidValue(const std::string &valueStr, float &number) const
{
	// ── 1. Parse + format check ───────────────────────────────────
	std::stringstream ss(valueStr);
	char leftover;

	if(!(ss >> number) || (ss >> leftover))
	{
		std::cerr << "Error: Invalid number format." << std::endl;
		return false;
	}
	// ── 2. Must be positive ───────────────────────────────────────
	if (number < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	// ── 3. Must not exceed 1000 ───────────────────────────────────
	if (number > 1000)
	{
		std::cerr << "Error: too large number." << std::endl;
		return false;
	}
	return true;
}