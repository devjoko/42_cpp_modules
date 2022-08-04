/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 20:51:20 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Great Explanations on the topic:
**
**	Subtype Polymorphism	https://www.youtube.com/watch?v=mv5_l4kuVho
**	Virtual Functions		https://www.youtube.com/watch?v=WdOe1bPf_pg&list=PLk6CEY9XxSICITtoUG_mJIBShyIYpeaoi&index=11
**	Virtual Destructor		https://www.youtube.com/watch?v=kDHiOLC5sQo&list=PLk6CEY9XxSICITtoUG_mJIBShyIYpeaoi&index=12
**
*/

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int	main(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                                ARRAY OF ANIMALS                            */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		unsigned int	size = 6;

		std::cout << "CALLING CONSTRUCTOR:" << std::endl;
		const Animal	*animals[size];
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << "-- " << i << " --" << std::endl;
			if (i % 2 == 0)
				animals[i] = new Cat("Cat");
			else
				animals[i] = new Dog("Dog");
		}
		std::cout << std::endl;

		std::cout << "CALLING DESTRUCTOR:" << std::endl;
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << "-- " << i << " --" << std::endl;
			delete animals[i];
		}
	}
	std::cout << std::endl;

	system("leaks brain");

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                               TESTING DEEP COPY                            */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		std::cout << "CALLING CONSTRUCTOR:" << std::endl;
		Cat	a;
		{
			Cat	b = a;
			std::cout << std::endl;

			std::cout << "COMPARING MEMORY ADDRESSES OF BRAIN PTR:" << std::endl;
			a.printBrain();
			b.printBrain();
			std::cout << std::endl;

			std::cout << "ASSIGNING B TO A:" << std::endl;
			a = b;
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << "PRINTING MEMORY ADDRESS OF A AFTER B HAS BEEN DESTRUCTED:" << std::endl;
		a.printBrain();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	system("leaks brain");

	return (0);
}
