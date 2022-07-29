/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 23:38:18 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int	main(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                         Subtype-Polymorphism Example                       */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		// system("leaks animal");
	}
	std::cout << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                                 WRONG Example                              */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();
		const WrongCat*		j = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		// system("leaks animal");
	}
	return (0);
}

// verstehe nicht, ob das schon vollstaendig ist oder korrekt so ??