/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/13 16:26:30 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Dog::Dog()
: Animal()
{
	std::cout << "Default constructor of Dog" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(std::string type)
: Animal(type)
{
	std::cout << "Parametric constructor of Dog" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog& rhs)
{
	std::cout << "Copy constructor of Dog" << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog" << std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "Copy assignment operator of Dog" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Dog::makeSound(void) const
{
	std::cout << "Dog makes Woooooff!!" << std::endl;
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
