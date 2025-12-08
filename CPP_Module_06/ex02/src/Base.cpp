/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:14:57 by rvikrama          #+#    #+#             */
/*   Updated: 2025/12/08 20:15:38 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include <cstdlib>
#include <iostream>

Base::~Base() {}

Base * generate()
{
	switch (rand() % 3)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer: A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer: B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer: C\n";
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Reference: A\n";
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "Reference: B\n";
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "Reference: C\n";
		return ;
	}
	catch (std::exception &e) {}
}