/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:42:57 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/16 18:26:39 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	std::cout << "\033[1;34mGenerating random object ... \033[0m" << std::endl;

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

/* Dynamic cast will return NULL, if it cannot downcast Base POINTER */
void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	if (a)
		std::cout << a->getType() << std::endl;
	if (b)
		std::cout << b->getType() << std::endl;
	if (c)
		std::cout << c->getType() << std::endl;
}

/* Dynamic cast will throw bad_cast exception, if it cannot downcast Base REFERENCE */
void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << a.getType() << std::endl;
	}
	catch(std::bad_cast) {}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << b.getType() << std::endl;
	}
	catch(std::bad_cast) {}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << c.getType() << std::endl;
	}
	catch(std::bad_cast) {}
}

int main(void)
{
	Base *p = generate();

	std::cout << "Identify (PTR) : ";
	identify(p);

	std::cout << "Identify (REF) : ";
	identify(*p);

	delete p;
	return (0);
}
