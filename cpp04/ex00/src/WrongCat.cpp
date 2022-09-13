/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 16:26:48 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

/* ************************************************************************** */
/*                                  WrongCat Class                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

WrongCat::WrongCat()
: WrongAnimal()
{
	std::cout << "Default constructor of WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
: WrongAnimal(type)
{
	std::cout << "Parametric constructor WrongCat" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& rhs)
{
	std::cout << "Copy constructor of WrongCat" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "Copy assignment operator of WrongCat" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makes Meowz!" << std::endl;
}

/* ************************************************************************** */
/*                                  WrongCat Class                            */
/* ************************************************************************** */
