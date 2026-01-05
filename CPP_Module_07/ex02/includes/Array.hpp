/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:18 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/05 15:24:36 by rvikrama         ###   ########.fr       */
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
		unsigned int _size;
		Type *_elements;

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
			if(this == other)
				return *this;

			delete[] _elements;

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