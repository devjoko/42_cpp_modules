/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:40:55 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/27 02:17:39 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main(void)
{



std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
std::cout << YELLOW << "/*                                   Empty Span                               */" << END << std::endl;
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
{
	Span sp;

	std::cout << BLUE << "* ADDING NUMBERS *" << END << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);

	std::cout << sp;

	std::cout << BLUE << "* COMPARING SPANS *" << END << std::endl;
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl << std::endl;
}
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
std::cout << YELLOW << "/*                                  Single Value                              */" << END << std::endl;
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
{
	Span sp(1);

	std::cout << BLUE << "* ADDING NUMBERS *" << END << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);

	std::cout << sp;

	std::cout << BLUE << "* COMPARING SPANS *" << END << std::endl;
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl << std::endl;
}
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
std::cout << YELLOW << "/*                                   Basic Test                               */" << END << std::endl;
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
{
	Span sp = Span(5);

	std::cout << BLUE << "* ADDING NUMBERS *" << END << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp;

	std::cout << BLUE << "* COMPARING SPANS *" << END << std::endl;
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl << std::endl;

	std::cout << BLUE << "* ADDING MORE NUMBERS *" << END << std::endl;
	sp.addNumber(0);
	sp.addNumber(0);
	sp.addNumber(0);
}
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
std::cout << YELLOW << "/*                                  Advanced Test                             */" << END << std::endl;
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
{
	std::srand(time(NULL));
	int size = std::rand() % 1000;
	int offset = 0;

	std::vector<int> tmp(size - offset);
	Span sp(size);

	std::cout << BLUE << "* ADDING NUMBERS *" << END << std::endl;
	sp.addNumber(tmp.begin(), tmp.end());
	std::cout << sp;

	std::cout << BLUE << "* COMPARING SPANS *" << END << std::endl;
	std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span : " << sp.longestSpan() << std::endl;

	std::cout << BLUE << "* ADDING MORE NUMBERS *" << END << std::endl;
	sp.addNumber(0);
	sp.addNumber(0);

}
return (0);



}
