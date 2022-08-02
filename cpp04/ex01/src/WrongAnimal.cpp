/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:03:59 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 19:29:58 by jpfuhl           ###   ########.fr       */
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
	std::cout << "Default constructor of \"WrongAnimal\"" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Parametric constructor of \"WrongAnimal\"" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor \"WrongAnimal\"" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "Assignment operator overload of \"WrongAnimal\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of \"WrongAnimal\"" << std::endl;
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
