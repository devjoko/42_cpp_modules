/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 21:06:03 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

/* ************************************************************************** */
/*                                  AAnimal Class                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

AAnimal::AAnimal() : _type("")
{
	std::cout << "Default construtor of \"AAnimal\"" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Parametric constructor of \"AAnimal\"" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "Copy constructor of \"AAnimal\"" << std::endl;
	*this = rhs;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "Copy assignment operator of \"AAnimal\"" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor of \"AAnimal\"" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                  AAnimal Class                              */
/* ************************************************************************** */
