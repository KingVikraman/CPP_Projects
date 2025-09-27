/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:42 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/26 13:30:27 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <string>
#include <iostream>


class WrongAnimal
{
	protected :
		std::string type;

	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal &operator=(const WrongAnimal& other);
		~WrongAnimal();

		void makeSound() const;
		std::string const & getType() const;
};


#endif