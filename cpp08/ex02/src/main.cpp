/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:57:01 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/27 04:02:57 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"
#include <list>

void printList(std::list<int> list)
{
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();

	std::cout << GREEN << "size() : " << list.size() << END << std::endl;

	if (list.size() > 0)
		std::cout << GREEN << "top() : " << list.back() << END << std::endl;

	std::cout << GREEN << "Stack : ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << END << std::endl;
}

void printStack(MutantStack<int> mstack)
{
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << GREEN << "size() : " << mstack.size() << END << std::endl;

	if (mstack.size() > 0)
		std::cout << GREEN << "top() : " << mstack.top() << END << std::endl;

	std::cout << GREEN << "Stack : ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << END << std::endl;
}

int main(void)
{


std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
std::cout << YELLOW << "/*                                  Mutant Stack                              */" << END << std::endl;
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
{
	MutantStack<int> mstack;

	printStack(mstack);

	std::cout << BLUE << "* adding numbers to stack *" << END << std::endl;
	mstack.push(5);
	mstack.push(17);

	printStack(mstack);

	std::cout << BLUE << "* pop() number off stack *" << END << std::endl;
	mstack.pop();

	printStack(mstack);

	std::cout << BLUE << "* adding more numbers to stack *" << END << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] 
	mstack.push(0);

	printStack(mstack);

	std::cout << BLUE << "* pop() number off stack TWICE *" << END << std::endl;
	mstack.pop();
	mstack.pop();

	printStack(mstack);

	std::cout << BLUE << "* iterator modification for fun *" << END << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	++it;
	--it;
	std::cout << BLUE << "* copy constructing for fun *" << END << std::endl;
	std::stack<int> s(mstack);
	std::cout << BLUE << "* copy assigning for fun *" << END << std::endl;
	std::stack<int> copy;
	copy = s;

	// system("leaks mutantstack");
}
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
std::cout << YELLOW << "/*                                      List                                  */" << END << std::endl;
std::cout << YELLOW << "/* ************************************************************************** */" << END << std::endl;
{
	std::list<int> list;

	printList(list);

	std::cout << BLUE << "* adding numbers to list *" << END << std::endl;
	list.push_back(5);
	list.push_back(17);
	
	printList(list);
	
	std::cout << BLUE << "* pop() number off list *" << END << std::endl;
	list.pop_back();

	printList(list);

	std::cout << BLUE << "* adding more numbers to list *" << END << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);

	printList(list);

	std::cout << BLUE << "* pop() number off from both sides *" << END << std::endl;
	list.pop_front();
	list.pop_back();

	printList(list);

	std::cout << RED << "* see the difference between <-list-> and stack-> *" << END << std::endl;
}
return (0);



}
