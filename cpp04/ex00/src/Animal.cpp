/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 19:33:14 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Animal::Animal()
: _type("Animal")
{
	std::cout << "Default construtor of Animal" << std::endl;
}

Animal::Animal(std::string type)
: _type(type)
{
	std::cout << "Parametric constructor of Animal" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
	std::cout << "Copy constructor of Animal" << std::endl;
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	std::cout << "Copy assignment operator of Animal" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Animal::makeSound(void) const
{
	std::cout << "Animal makes sound!" << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string Animal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
