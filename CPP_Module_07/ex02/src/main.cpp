/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:21 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/06 22:51:36 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

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


	std::cout << "\n=== Test 5: Assignment Operator (Deep Copy) ===" << std::endl;
	Array<int> x(3);
	x[0] = 100;
	x[1] = 200;
	x[2] = 300;

	Array<int> y(5);
	y = x;

	y[0] = 999;

	std::cout << "x[0] = " << x[0] << " (should be 100)" << std::endl;
	std::cout << "y[0] = " << y[0] << " (should be 999)" << std::endl;
	std::cout << "x.size() = " << x.size() << ", y.size() = " << y.size() << std::endl;


	std::cout << "\n=== Test 6: Multiple Types ===" << std::endl;
	Array<int> intArr(3);
	intArr[0] = 10;
	intArr[1] = 20;
	intArr[2] = 30;
	std::cout << "Int array: ";
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] << " ";
	std::cout << std::endl;

	Array<double> doubleArr(3);
	doubleArr[0] = 1.5;
	doubleArr[1] = 2.7;
	doubleArr[2] = 3.14;
	std::cout << "Double array: ";
	for (unsigned int i = 0; i < doubleArr.size(); i++)
		std::cout << doubleArr[i] << " ";
	std::cout << std::endl;

	Array<std::string> strArr(3);
	strArr[0] = "hello";
	strArr[1] = "world";
	strArr[2] = "templates";
	std::cout << "String array: ";
	for (unsigned int i = 0; i < strArr.size(); i++)
		std::cout << strArr[i] << " ";
	std::cout << std::endl;


	std::cout << "\n=== Test 7: Out of Bounds Exception ===" << std::endl;
	Array<int> test(5);
	try
	{
		std::cout << "Trying to access index 10..." << std::endl;
		test[10] = 100;  // Should throw
		std::cout << "ERROR: Should have thrown exception!" << std::endl;
	}
	catch (std::out_of_range& e)
	{
		std::cout << "Successfully caught exception: " << e.what() << std::endl;
	}


	return(0);
}