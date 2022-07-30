/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/30 17:23:20 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

/* ************************************************************************** */
/*                                  WrongCat Class                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat : Default constructor" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat : Parametric constructor" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat : Copy constructor" << std::endl;
	*this = copy;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &assign)
{
	std::cout << "WrongCat : Assignment operator overload" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makes \"Meowz!\"" << std::endl;
}

/* ************************************************************************** */
/*                                  WrongCat Class                            */
/* ************************************************************************** */
