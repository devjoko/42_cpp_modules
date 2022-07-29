/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 22:50:39 by jpfuhl           ###   ########.fr       */
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
	std::cout << "DOG : Default constructor" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "DOG : Parametric constructor" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "DOG : Copy constructor" << std::endl;
	*this = copy;
	return ;
}

Dog	&Dog::operator=(const Dog &assign)
{
	std::cout << "DOG : Assignment operator overload" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "DOG : Destructor" << std::endl;
	delete this;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "Woooooff!!" << std::endl;
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
