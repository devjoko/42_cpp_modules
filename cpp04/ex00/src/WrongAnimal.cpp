/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:03:59 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 19:33:57 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

/* ************************************************************************** */
/*                              WrongAnimal Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

WrongAnimal::WrongAnimal()
: _type("WrongAnimal")
{
	std::cout << "Default constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
: _type(type)
{
	std::cout << "Parametric constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
	std::cout << "Copy constructor WrongAnimal" << std::endl;
	*this = rhs;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "Copy assignment operator of WrongAnimal" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes sound!" << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                              WrongAnimal Class                             */
/* ************************************************************************** */
