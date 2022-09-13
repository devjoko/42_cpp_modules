/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 17:50:00 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ABSTRACT CLASS
**
**	You can instantiate objects of the subtypes,
**	but not the base class itself:
**
**	AAnimal *c = new AAnimal("Abstractum");
**
**	... will cause a compilation error.
*/

#include "../inc/AAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main(void)
{
	AAnimal *a = new Cat("Tiger");
	AAnimal *b = new Dog("Lassie");

	a->makeSound();
	std::cout << a->getType() << std::endl;
	b->makeSound();
	std::cout << b->getType() << std::endl;

	delete a;
	delete b;

	return (0);
}
