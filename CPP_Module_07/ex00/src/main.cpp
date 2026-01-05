/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:19:52 by rvikrama          #+#    #+#             */
/*   Updated: 2026/01/02 20:06:26 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"




// int main( void ) {
// SEPARATOR("INTEGER TESTS");
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// SEPARATOR("STRING TESTS");

// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }

int main()
{
    /* ===================== BASIC INTEGER TESTS ===================== */
    SEPARATOR("INTEGER TESTS");

    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap:  a = " << a << ", b = " << b << std::endl;

    std::cout << "max(a, b): " << ::max(a, b) << std::endl;
    std::cout << "min(a, b): " << ::min(a, b) << std::endl;


    /* ===================== EQUAL VALUE TESTS ===================== */
    SEPARATOR("EQUAL VALUES TESTS");

    int x = 42;
    int y = 42;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swap:  x = " << x << ", y = " << y << std::endl;

    std::cout << "max(x, y): " << ::max(x, y) << std::endl;
    std::cout << "min(x, y): " << ::min(x, y) << std::endl;


    /* ===================== FLOATING POINT TESTS ===================== */
    SEPARATOR("FLOAT TESTS");

    float f1 = 3.14f;
    float f2 = 2.71f;

    std::cout << "Before swap: f1 = " << f1 << ", f2 = " << f2 << std::endl;
    swap(f1, f2);
    std::cout << "After swap:  f1 = " << f1 << ", f2 = " << f2 << std::endl;

    std::cout << "max(f1, f2): " << ::max(f1, f2) << std::endl;
    std::cout << "min(f1, f2): " << ::min(f1, f2) << std::endl;


    /* ===================== STRING TESTS ===================== */
    SEPARATOR("STRING TESTS");

    std::string s1 = "apple";
    std::string s2 = "banana";

    std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    swap(s1, s2);
    std::cout << "After swap:  s1 = " << s1 << ", s2 = " << s2 << std::endl;

    std::cout << "max(s1, s2): " << ::max(s1, s2) << std::endl;
    std::cout << "min(s1, s2): " << ::min(s1, s2) << std::endl;

    /* ===================== CHAR TESTS ===================== */
    SEPARATOR("CHAR TESTS");

    char c1 = 'A';
    char c2 = 'Z';

    std::cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    swap(c1, c2);
    std::cout << "After swap:  c1 = " << c1 << ", c2 = " << c2 << std::endl;

    std::cout << "max(c1, c2): " << ::max(c1, c2) << std::endl;
    std::cout << "min(c1, c2): " << ::min(c1, c2) << std::endl;


    /* ===================== NEGATIVE VALUE TESTS ===================== */
    SEPARATOR("NEGATIVE NUMBER TESTS");

    int n1 = -5;
    int n2 = -10;

    std::cout << "Before swap: n1 = " << n1 << ", n2 = " << n2 << std::endl;
    swap(n1, n2);
    std::cout << "After swap:  n1 = " << n1 << ", n2 = " << n2 << std::endl;

    std::cout << "max(n1, n2): " << ::max(n1, n2) << std::endl;
    std::cout << "min(n1, n2): " << ::min(n1, n2) << std::endl;


    /* ===================== CONST-CORRECTNESS TEST ===================== */
    SEPARATOR("CONST VALUE TESTS");

    const int ca = 100;
    const int cb = 200;

    std::cout << "max(ca, cb): " << ::max(ca, cb) << std::endl;
    std::cout << "min(ca, cb): " << ::min(ca, cb) << std::endl;

    // swap(ca, cb); // ❌ This should NOT compile. That is correct behavior.


    /* ===================== SELF-SWAP EDGE CASE ===================== */
    SEPARATOR("SELF-SWAP TEST");

    int self = 99;
    std::cout << "Before swap: self = " << self << std::endl;
    swap(self, self);
    std::cout << "After swap:  self = " << self << std::endl;


    std::cout << "\n========== ALL TESTS COMPLETED ==========\n";
    return 0;
}