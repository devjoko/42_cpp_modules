/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:22:25 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/09 18:44:25 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"
#include <limits>

/* ************************************************************************** */
/*                                  Span Class                                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Span::Span(unsigned int N)
: _size(N), _count(0)
{
	std::cout << "Constructor Span" << std::endl;
}

// Span::Span(const Span& rhs)
// {

// }

Span::~Span()
{
	std::cout << "Destructor Span" << std::endl;
}

// Span& Span::operator=(const Span& rhs)
// {
	
// }

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Span::addNumber(int number)
{
	try
	{
		if (this->_count + 1 > this->_size)
			throw (std::range_error("error: stack is full"));

		this->_stack.push_back(number);
		this->_count += 1;

		// std::vector<int>::iterator it = this->_stack.begin();
		// for ( ; it != this->_stack.end(); it++)
		// 	std::cout << *it << std::endl;
		// std::cout << "*******************" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

int Span::shortestSpan(void)
{
	int diff = INT_MAX;
	int tmp;

	try
	{
		if (this->_size == 0 || this->_count == 0)
			throw (std::range_error("error: stack is empty"));
		else if (this->_count == 1)
			diff = 0; // 1 auch nicht
		else if (this->_count >= 2)
		{
			std::sort(this->_stack.begin(), this->_stack.end());
			std::vector<int>::iterator it = this->_stack.begin();
			for ( ; it != this->_stack.end(); it++)
			{
				if (it + 1 != this->_stack.end())
					tmp = *(it + 1) - *it;
				// std::cout << tmp << std::endl;
				if (tmp < diff)
					diff = tmp;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}

	return (diff);
}

// tmp vector stack sortieren


int Span::longestSpan(void)
{
	try
	{
		if (this->_size == 0 || this->_count == 0)
			throw (std::range_error("error: stack is empty"));
		std::sort(this->_stack.begin(), this->_stack.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}

	return (this->_stack[this->_count - 1] - this->_stack[0]);
}


/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

// std::ostream& operator<<(const std::ostream& out, const Span& obj)
// {
// 	std::vector<int>::iterator it = );

// 	while (it != _stack.end())
		
// }


/* ************************************************************************** */
/*                                  Span Class                                */
/* ************************************************************************** */
