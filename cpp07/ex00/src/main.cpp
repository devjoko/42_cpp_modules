/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:45:49 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 19:29:55 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;36m"
#define END		"\033[0m"

int main(void)
{


{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                              Testing Integers                              */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	int a = 1;
	int b = 100;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << BLUE << "* SWAP! *" << END << std::endl;
	::swap(a,b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	std::cout << BLUE << "* MIN! *" << END << std::endl;
	std::cout << ::min(a,b) << std::endl;

	std::cout << BLUE << "* MAX! *" << END << std::endl;
	std::cout << ::max(a,b) << std::endl;
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                             Testing Strings                                */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::string a = "Hello World!";
	std::string b = "Goodbye World!";
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << BLUE << "* SWAP! *" << END << std::endl;
	::swap(a,b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	std::cout << BLUE << "* MIN! *" << END << std::endl;
	std::cout << ::min(a,b) << std::endl;

	std::cout << BLUE << "* MAX! *" << END << std::endl;
	std::cout << ::max(a,b) << std::endl;
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                             Testing Floats                                 */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	float a = 1.23f;
	float b = 9.87f;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << BLUE << "* SWAP! *" << END << std::endl;
	::swap(a,b);
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	std::cout << BLUE << "* MIN! *" << END << std::endl;
	std::cout << ::min(a,b) << std::endl;

	std::cout << BLUE << "* MAX! *" << END << std::endl;
	std::cout << ::max(a,b) << std::endl;
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                             Testing Chars                                  */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	char a = 'A';
	char b = 'Z';
	std::cout << "1 = " << a << ", 2 = " << b << std::endl;

	std::cout << BLUE << "* SWAP! *" << END << std::endl;
	::swap(a,b);
	std::cout << "1 = " << a << ", 2 = " << b << std::endl;

	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	std::cout << BLUE << "* MIN! *" << END << std::endl;
	std::cout << ::min(a,b) << std::endl;

	std::cout << BLUE << "* MAX! *" << END << std::endl;
	std::cout << ::max(a,b) << std::endl;
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                             Testing Classes                                */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	Awesome a(1);
	Awesome b(9);
	std::cout << "a = " << a << "b = " << b;

	std::cout << BLUE << "* SWAP! *" << END << std::endl;
	::swap(a,b);
	std::cout << "a = " << a << "b = " << b;

	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	std::cout << BLUE << "* MIN! *" << END << std::endl;
	Awesome minimum = ::min(a,b);
	std::cout << minimum;

	std::cout << BLUE << "* MAX! *" << END << std::endl;
	Awesome maximum = ::max(a,b);
	std::cout << maximum;
}


return (0);
}
