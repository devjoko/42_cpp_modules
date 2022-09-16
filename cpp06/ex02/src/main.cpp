/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:42:57 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 04:17:15 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

Base* generate(void)
{
	Base *p;

	srand(time(NULL));
	int n = rand() % 3;
	std::cout << n << std::endl;

	switch(n)
	{
		case 0:
			p = new A;
			break ;
		case 1:
			p = new B;
			break ;
		case 2:
			p = new C;
			break ;
	}
	return (p);
}

void identify(Base* p);

void identify(Base& p);

int main(void)
{
	Base *p = generate();
	std::cout << &p << std::endl;

	delete p;
	return (0);
}
