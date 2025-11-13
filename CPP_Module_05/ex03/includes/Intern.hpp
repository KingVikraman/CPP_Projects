/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:35:21 by rvikrama          #+#    #+#             */
/*   Updated: 2025/11/13 20:41:38 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AForm;

class Intern {
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);
	~Intern();
	AForm* makeForm(const std::string formNameParam, const std::string target);
};