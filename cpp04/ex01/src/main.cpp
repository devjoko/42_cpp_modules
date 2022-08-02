/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 22:09:25 by jpfuhl           ###   ########.fr       */
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
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                             WITH VIRTUAL FUNCTION                          */" << std::endl;
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

	// system("leaks brain");

	return (0);
}
