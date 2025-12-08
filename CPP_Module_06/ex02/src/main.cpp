/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:14:52 by rvikrama          #+#    #+#             */
/*   Updated: 2025/12/08 20:16:18 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include <cstdlib>
#include <iostream>

int main()
{
	srand(time(NULL));
	
	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;
	return (0);
}