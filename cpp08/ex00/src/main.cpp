/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:48:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/26 22:26:54 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <cstdlib>
#include <ctime>

#define	RED			"\033[1;31m"
#define	GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define BLUE		"\033[1;36m"
#define	END			"\033[0m"

int main(void)
{
	std::vector<int> values;
	std::vector<int>::iterator it;
	std::srand(time(NULL));
	int size = std::rand() % 250;
	int count = 0;

	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << YELLOW << "/*                             Testing vector<int>                            */" << END << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;

	std::cout << BLUE << "* adding " << size << " random values to vector<int> *" << END << std::endl;
	for (int i = 0; i < size; i++)
		values.push_back(std::rand() % size);

	std::cout << BLUE << "* EASYFIND : checking if random value is in container *" << END << std::endl;
	for (int i = 0; i < size; i++)
	{
		int random = std::rand() % size;
		try
		{
			std::cout << random << " : ";
			it = easyfind(values, random);
			std::cout << GREEN << "found it! (*it == " << *it << " )" << END << std::endl;
			count += 1;
		}
		catch (std::exception & e)
		{
			std::cout << RED << e.what() << END << std::endl;
		}
	}
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	std::cout << "Container size : " << size << std::endl;
	std::cout << "Found values : " << GREEN << count << END << std::endl;
	std::cout << "Probability : " << (static_cast<float>(count) / static_cast<float>(size)) * 100.0f << "%" << std::endl;
	std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
	return (0);
}
