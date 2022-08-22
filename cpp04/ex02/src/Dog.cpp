/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/22 16:58:44 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*                                    Dog Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Dog::Dog() : AAnimal()
{
	std::cout << "Default constructor of \"Dog\"" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(std::string type) : AAnimal(type)
{
	std::cout << "Parametric constructor of \"Dog\"" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Copy constructor of \"Dog\"" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Copy assignment operator of \"Dog\"" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*this->_brain = *rhs._brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of \"Dog\"" << std::endl;
	delete this->_brain;
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
