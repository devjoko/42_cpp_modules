/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 21:00:06 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

/* ************************************************************************** */
/*                                    Brain Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Brain::Brain()
{
	std::cout << "Default constructor of Brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "I am a cute animal!";
}

Brain::Brain(const Brain& rhs)
{
	std::cout << "Copy constructor of Brain" << std::endl;
	*this = rhs;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "Copy assignment operator of Brain" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Brain::think(int i)
{
	if (0 <= i && i < 100)
		std::cout << this->_ideas[i] << std::endl;
}

/* ************************************************************************** */
/*                                    Brain Class                             */
/* ************************************************************************** */
