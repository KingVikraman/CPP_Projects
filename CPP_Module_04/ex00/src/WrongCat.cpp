/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raja <raja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:28:05 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/28 13:17:08 by raja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat!";
	std::cout
	<< "WrongCat : Default constructor is called! "
	<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout
	<< "WrongCat: Destructor is called! "
	<< std::endl;
}


void WrongCat::makeSound() const
{
	std::cout
	<< "WrongCat: Meow! Meow! Meow! (Wrong Polymorphism)! \n"
	<< std::endl;
}
