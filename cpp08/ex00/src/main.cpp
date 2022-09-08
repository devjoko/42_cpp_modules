/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:48:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/08 20:08:27 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>

/* TESTING */

int main(void)
{
	std::vector<int> values = {1, 2, 3, 4, 5};
	std::vector<int>::iterator it;

	srand(10);
	for (int i = 0; i < 20; i++)
	{
		int random = rand() % 10;
		try
		{
			std::cout << random << " : ";
			it = easyfind(values, random);
			std::cout << *it << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}



	return (0);
}
