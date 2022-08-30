/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/30 17:37:56 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

/* ************************************************************************** */
/*                                AMateria Class                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

AMateria::AMateria()
{
	std::cout << "Default Constructor AMateria" << std::endl;
	this->_type = "default";
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Parametric Constructor AMateria" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &rhs) // not needed ?
{
	std::cout << "Copy Constructor AMateria" << std::endl;
	this->_type = rhs._type;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	std:: cout << "Copy Assignment Operator AMateria" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Destructor AMateria" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                AMateria Class                              */
/* ************************************************************************** */
