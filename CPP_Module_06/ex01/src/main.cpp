/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 20:11:00 by rvikrama          #+#    #+#             */
/*   Updated: 2025/12/08 20:14:30 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main()
{
	Data d;

	d.data = "Helloooo!!";

	uintptr_t serial = Serializer::serialize(&d);

	std::cout << "real data: " << d.data << "\nreal data address: " << &d << std::endl;
	
	Data* deserialized = Serializer::deserialize(serial);
	
	std::cout << "restored data: " << deserialized->data << "\nrestored data address: " << deserialized << std::endl;
}