/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 23:22:44 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Animal::Animal() : _type("")
{
	std::cout << "ANIMAL : Default constructor" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "ANIMAL : Parametric constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "ANIMAL : Copy constructor" << std::endl;
	*this = copy;
	return ;
}

Animal	&Animal::operator=(const Animal &assign)
{
	std::cout << "ANIMAL : Assignment operator overload" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "ANIMAL : Destructor" << std::endl;
	delete this;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes sound!" << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string	Animal::getType(void) const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
