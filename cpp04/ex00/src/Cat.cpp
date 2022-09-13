/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 19:33:28 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/* ************************************************************************** */
/*                                    Cat Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Cat::Cat()
: Animal()
{
	std::cout << "Default constructor of Cat" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(std::string type)
: Animal(type)
{
	std::cout << "Parametric constructor of Cat" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& rhs)
{
	std::cout << "Copy constructor of Cat" << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "Copy assignment operator of Cat" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Cat::makeSound(void) const
{
	std::cout << "Cat makes Meeeooow!!" << std::endl;
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
