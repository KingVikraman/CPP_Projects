/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:15 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/04 16:59:45 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void printInt(const int &i)
{
	std::cout << i << std::endl;
}

void doubleInt(int &i)
{
	i *= 2;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::cout << "Printing array: " << std::endl;
	iter(arr, 5, printInt);

	std::cout << "\nDoubling Array: " << std::endl;
	iter(arr, 5, doubleInt);
	std::cout << "\nAfter doubling: " << std::endl;
	iter(arr, 5, printInt);


	return(0);
}