/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:28:49 by rvikrama          #+#    #+#             */
/*   Updated: 2026/05/28 21:06:50 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>
#include <iostream>
#include <exception>
#include <sstream>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _database;
        bool isValidDate(const std::string &date) const;
        bool isValidValue(const std::string &value) const;
        float getExchangeRate(const std::string &date);
        
        
    public:
        BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        
        void loadDatabase(const std::string &filename);
        void processInputFile(const std::string &filename);
        
};
