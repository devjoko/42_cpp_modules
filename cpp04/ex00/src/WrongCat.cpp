/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 19:30:43 by jpfuhl           ###   ########.fr       */
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
	std::cout << "Default constructor of \"WrongCat\"" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "Parametric constructor \"WrongCat\"" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy constructor of \"WrongCat\"" << std::endl;
	*this = copy;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &assign)
{
	std::cout << "Assignment operator overload of \"WrongCat\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of \"WrongCat\"" << std::endl;
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
