/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 20:22:25 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/27 02:03:04 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

/* ************************************************************************** */
/*                                  Span Class                                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Span::Span()
: _size(0), _count(0) {}

Span::Span(unsigned int N)
: _size(N), _count(0) { _container.reserve(N); }

Span::Span(const Span& rhs)
: _size(rhs._size), _count(rhs._count)
{
	this->_container = rhs._container;
}

Span::~Span() {}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs._size;
		this->_count = rhs._count;
		this->_container = rhs._container;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Span::addNumber(int number)
{
	try
	{
		if (this->_count + 1 > this->_size)
			throw (std::range_error("error : stack is full"));

		this->_container.push_back(number);
		this->_count += 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	try
	{
		if (first > last)
			throw (std::invalid_argument("error : first must be smaller than last"));
		else if (this->_count + 1 > this->_size)
				throw (std::range_error("error : stack is full"));

		std::srand(time(NULL));
		std::vector<int>::iterator it = first;
		int diff = last - first;
		int value;

		for ( ; it != last; it++)
		{
			if (this->_count + 1 > this->_size)
				throw (std::range_error("error : stack is full"));
			value = std::rand() % (diff * 10);
			this->_container.insert(_container.begin(), 1, value);
			_count += 1;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
}

int Span::shortestSpan(void)
{
	int diff = INT_MAX;
	std::vector<int> tmp_container(_container);

	try
	{
		if (this->_size == 0 || this->_count == 0)
			throw (std::range_error("error : stack is empty"));
		else if (this->_count == 1)
			throw (std::range_error("error : cannot calculate span of single number"));
		else if (this->_count >= 2)
		{
			int tmp_int;

			std::sort(tmp_container.begin(), tmp_container.end());
			std::vector<int>::iterator it = tmp_container.begin();
			for ( ; it != tmp_container.end(); it++)
			{
				if (it + 1 != tmp_container.end())
					tmp_int = *(it + 1) - *it;
				if (tmp_int < diff)
					diff = tmp_int;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
		return (-1);
	}
	return (diff);
}

int Span::longestSpan(void)
{
	std::vector<int> tmp_container(_container);

	try
	{
		if (this->_size == 0 || this->_count == 0)
			throw (std::range_error("error : stack is empty"));
		else if (this->_count == 1)
			throw (std::range_error("error : cannot calculate span of single number"));
		else if (this->_count >= 2)
			std::sort(tmp_container.begin(), tmp_container.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
		return (-1);
	}
	return ( *(tmp_container.end() - 1) - *tmp_container.begin() );
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

const std::vector<int>& Span::getContainer(void) const
{
	return (this->_container);
}

/* ************************************************************************** */
/*                               Non-Member Functions                         */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const Span& obj)
{
	std::vector<int>::const_iterator it = obj.getContainer().begin();

	out << YELLOW << "Container holds : " << END;
	for ( ; it != obj.getContainer().end(); it++)
		out << *it << " ";
	out << std::endl << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                  Span Class                                */
/* ************************************************************************** */
