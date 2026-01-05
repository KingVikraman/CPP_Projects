/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:09 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/05 15:36:19 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename Type, typename Func>
void iter(Type *array, size_t length, Func function)
{
	for(size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

#endif