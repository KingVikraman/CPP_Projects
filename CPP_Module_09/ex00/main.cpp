/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:28:21 by rvikrama          #+#    #+#             */
/*   Updated: 2026/05/25 16:42:38 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    // Write C++ code here
    if (argc != 2)
    {
        std::cout << "Error: Wrong Usage, pleae enter the correct format!" << std::endl;
        return (1);
    }
    try
    {
        BitcoinExchange btc;
        
        btc.loadDatabase("data.csv");
        btc.processInputFile(argv[1]);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return(1);
    }
    return (0);
}