/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 20:55:03 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Dog::Dog() : Animal()
{
	std::cout << "Default constructor of \"Dog\"" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Parametric constructor of \"Dog\"" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor of \"Dog\"" << std::endl;
	*this = copy;
	return ;
}

Dog	&Dog::operator=(const Dog &assign)
{
	std::cout << "Assignment operator overload of \"Dog\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of \"Dog\"" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "Dog makes \"Woooooff!!\"" << std::endl;
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
