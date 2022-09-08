/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:40:55 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 22:09:05 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	// srand(time(0));
	
	// Span span_obj(rand() & 100);


	// for (int i = 0; i < 8; i++)
	// 	span_obj.addNumber(rand() % 100);

	// std::cout << span_obj.shortestSpan() << std::endl;
	// std::cout << span_obj.longestSpan() << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}
