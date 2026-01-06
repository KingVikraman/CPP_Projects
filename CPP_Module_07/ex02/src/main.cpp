/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:21 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/06 17:13:25 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "=== Test 1: Default Constructor ===" << std::endl;
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

	std::cout << "\n=== Test 2: Parameterized Constructor ===" << std::endl;
	Array<int> arr(5);
	std::cout << "Array size: " << arr.size() << std::endl;

	std::cout << "\n=== Test 3: Accessing/Modifying Elements ===" << std::endl;
	arr[0] = 2;
	arr[1] = 4;
	arr[2] = 6;
	arr[3] = 8;
	arr[4] = 10;

	for(int i = 0; i < 5; i++)
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;


	std::cout << "\n=== Test 4: Copy Constructor (Depp Copy) ===" << std::endl;
	Array<int> a(5);
	Array<int> b = a;
	//Array<int> c(a);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	//a[0] = 5;
	b[0] = 10;
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;


	return(0);
}