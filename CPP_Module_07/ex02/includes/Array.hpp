/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:20:18 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/06 14:36:37 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <stdexcept>

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
			_elements = NULL;
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
				_elements = NULL;
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
				_elements = NULL;
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

		Type &operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index is out of bounds");
			return _elements[i];
		}

		const Type &operator[](unsigned int i)const
		{
			if (i >= _size)
				throw std::out_of_range("Index is out of bounds");
			return _elements[i];
		}
};

#endif
// #ifndef ARRAY_HPP
// #define ARRAY_HPP

// #include <string>
// #include <iostream>

// template <typename Type>
// class Array
// {
// 	private:
// 		Type *_elements;
// 		unsigned int _size;
	
// 	public:
// 		Array()
// 		{
// 			_size = 0;
// 			_elements = NULL;
// 		}

// 		Array(unsigned int n)
// 		{
// 			_size = n;
// 			_elements = new Type[n];
// 		}

// 		Array(const Array &other)
// 		{
// 			_size = other._size;

// 			if(_size == 0)
// 				_elements = NULL;
// 			else
// 			{
// 				_elements = new Type[_size];
// 				for(unsigned int i = 0; i < _size; i++)
// 					_elements[i] = other._elements[i];
// 			}
// 		}

// 		Array &operator=(const Array &other)
// 		{
// 			if(this == &other)
// 				return *this;

// 			delete[] _elements;

// 			_size = other._size;
// 			if(_size == 0)
// 				_elements = NULL;
// 			else
// 			{
// 				_elements = new Type[_size];
// 				for (unsigned int i = 0; i < _size; i++)
// 					_elements[i] = other._elements[i];
// 			}
// 			return *this;
// 		}

// 		~Array()
// 		{
// 			delete[] _elements;
// 		}

// 		unsigned int size() const
// 		{
// 			return _size;
// 		}
		
// };



// #endif