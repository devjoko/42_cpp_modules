/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/22 17:43:04 by jpfuhl           ###   ########.fr       */
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

#include "../inc/AAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int	main(void)
{
	AAnimal	*a = new Cat("Tiger");
	AAnimal	*b = new Dog("Lassie");

	a->makeSound();
	std::cout << a->getType() << std::endl;
	b->makeSound();
	std::cout << b->getType() << std::endl;

	delete a;
	delete b;

	return (0);
}
