/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:16:45 by rvikrama          #+#    #+#             */
/*   Updated: 2025/09/27 21:20:24 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>


class Brain 
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain();


	void setIdea(int index, const std::string idea);
	void showIdea(int index) const;

};