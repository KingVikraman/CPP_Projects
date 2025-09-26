/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:49 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/26 13:30:15 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>



class Animal
{
	protected:
		std::string type;

	public:
		// Orthodox Colonial Form.
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal &other);
		virtual ~Animal(); // let the actual object decide what code runs, not just the pointer type.

		virtual void makeSounds() const;
		virtual std::string const & getType() const;
};

#endif