/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 20:52:33 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Animal::Animal() : _type("")
{
	std::cout << "Default construtor of \"Animal\"" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Parametric constructor of \"Animal\"" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor of \"Animal\"" << std::endl;
	*this = copy;
	return ;
}

// THIS IS COPY ASSIGNMENT OPERATOR
Animal	&Animal::operator=(const Animal &assign)
{
	std::cout << "Assignment operator uverload of \"Animal\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor of \"Animal\"" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes sound!" << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string	Animal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
