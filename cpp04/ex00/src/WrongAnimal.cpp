/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:03:59 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/30 17:23:17 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

/* ************************************************************************** */
/*                              WrongAnimal Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal : Default constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal : Parametric constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal : Copy constructor" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "WrongAnimal : Assignment operator overload" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : Destructor" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes sound!" << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                              WrongAnimal Class                             */
/* ************************************************************************** */
