/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 16:08:02 by jpfuhl           ###   ########.fr       */
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

int main(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                             WITH VIRTUAL FUNCTION                          */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		std::cout << "CALLING CONSTRUCTOR:" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;

		std::cout << "TYPES:" << std::endl;
		std::cout << "j is a " << j->getType() << "" << std::endl;
		std::cout << "i is a " << i->getType() << "" << std::endl;
		std::cout << "meta is a " << meta->getType() << "" << std::endl;
		std::cout << std::endl;

		std::cout << "ANIMAL SOUNDS:" << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		
		std::cout << "CALLING DESTRUCTOR:" << std::endl;
		delete meta;
		delete j;
		delete i;
	}

	std::cout << std::endl;

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                           WITHOUT VIRTUAL FUNCTIONS                        */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		std::cout << "CALLING CONSTRUCTOR:" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << std::endl;

		std::cout << "TYPES:" << std::endl;
		std::cout << "meta is a " << meta->getType() << "" << std::endl;
		std::cout << "i is a " << i->getType() << "" << std::endl;
		std::cout << std::endl;

		std::cout << "ANIMAL SOUNDS:" << std::endl;
		meta->makeSound();
		i->makeSound();
		std::cout << std::endl;

		std::cout << "CALLING DESTRUCTOR:" << std::endl;
		delete meta;
		delete i;
	}

	std::cout << std::endl;

	return (0);
}
