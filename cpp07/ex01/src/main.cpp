/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:27:20 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 20:24:39 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

#define YELLOW	"\033[1;33m"
#define BLUE	"\033[1;36m"
#define END		"\033[0m"

int main(void)
{
	const size_t size = 5;
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                                Testing Chars                               */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	
	char arr[size] = {'H', 'E', 'L', 'L', 'O'};

	std::cout << BLUE << "* PRINT ONCE! *" << END << std::endl;
	iter(arr, size, print);

	std::cout << BLUE << "* PRINT TWICE! *" << END << std::endl;
	iter(arr, size, printTwice);
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                               Testing Strings                              */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	
	std::string arr[size] = {"Hello", "World!", "I'm", "on", "fire!"};

	std::cout << BLUE << "* PRINT ONCE! *" << END << std::endl;
	iter(arr, size, print);

	std::cout << BLUE << "* PRINT TWICE! *" << END << std::endl;
	iter(arr, size, printTwice);
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                              Testing Integers                              */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	
	int arr[size] = {1, 9, 2, 8, 3};

	std::cout << BLUE << "* PRINT ONCE! *" << END << std::endl;
	iter(arr, size, print);

	std::cout << BLUE << "* PRINT TWICE! *" << END << std::endl;
	iter(arr, size, printTwice);
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                              Testing Floats                                */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	
	float arr[size] = {0.5f, 9.4f, 1.3f, 8.2f, 2.1f};

	std::cout << BLUE << "* PRINT ONCE! *" << END << std::endl;
	iter(arr, size, print);

	std::cout << BLUE << "* PRINT TWICE! *" << END << std::endl;
	iter(arr, size, printTwice);
}
{
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                             Testing Classes                                */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	
	Awesome *arr = new Awesome[5];

	std::cout << BLUE << "* PRINT ONCE! *" << END << std::endl;
	iter(arr, size, print);

	std::cout << BLUE << "* PRINT TWICE! *" << END << std::endl;
	iter(arr, size, printTwice);

	delete[] arr;
}
	return 0;
}
