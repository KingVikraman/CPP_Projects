/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:18 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/05 00:02:19 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename Type>
class Array
{
	private:
		Type *_elements;
		unsigned int _size;
	
	public:
		Array()
		{
			_size = 0;
			_elements = nullptr;
		}

		Array(unsigned int n)
		{
			_size = n;
			_elements = new Type[n];
		}

		Array(const Array &other)
		{
			_size = other._size;

			if(_size == 0)
				_elements = nullptr;
			else
			{
				_elements = new Type[_size];
				for(unsigned int i = 0; i < _size; i++)
					_elements[i] = other._elements[i];
			}
		}

		Array &operator=(const Array &other)
		{
			if(this == &other)
				return *this;

			delete[] _elements;

			_size = other._size;
			if(_size == 0)
				_elements = nullptr;
			else
			{
				_elements = new Type[_size];
				for (unsigned int i = 0; i < _size; i++)
					_elements[i] = other._elements[i];
			}
			return *this;
		}

		~Array()
		{
			delete[] _elements;
		}

		unsigned int size() const
		{
			return _size;
		}
		
};



#endif