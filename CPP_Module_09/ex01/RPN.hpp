/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 19:19:40 by rvikrama          #+#    #+#             */
/*   Updated: 2026/05/29 19:20:08 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
	private:
		bool isValidOperator(char c);
		int handleOperations(char , int a, int b);
	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);

		int evaluate(const std::string &expression);
};

#endif