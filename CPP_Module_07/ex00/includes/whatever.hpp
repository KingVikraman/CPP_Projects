/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:19:57 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/05 12:35:30 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#define SEPARATOR(title) \
		std::cout << "\n==========" << title << "=========\n";

#include <string>
#include <iostream>

template <typename Type>
void swap(Type &a, Type &b)
{
	Type temp = a;
	a = b;
	b = temp;
}

template <typename Type>
Type max(const Type &a, const Type &b)
{
	if(a > b)
		return a;
	return b;
}

template <typename Type>
Type min(const Type &a, const Type &b)
{
	if(a < b)
		return a;
	return b;
}
	
#endif