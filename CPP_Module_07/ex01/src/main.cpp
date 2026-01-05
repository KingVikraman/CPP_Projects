/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:15 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/05 15:36:34 by raja             ###   ########.fr       */
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

void addingInt(int &i)
{
	i += 5;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	std::cout << "Printing Arrays: " << std::endl;
	iter(arr, 5, printInt);

	std::cout << "\nDoubling Array: " << std::endl;
	iter(arr, 5, doubleInt);
	iter(arr, 5, printInt);

	std::cout << "\nAdding 5 to Array: " << std::endl;
	iter(arr, 5, addingInt);
	iter(arr, 5, printInt);
	std::cout << "\n";
}
