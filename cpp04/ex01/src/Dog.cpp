/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 20:54:53 by jpfuhl           ###   ########.fr       */
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
	this->_brain = new Brain();
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Parametric constructor of \"Dog\"" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor of \"Dog\"" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return ;
}

Dog	&Dog::operator=(const Dog &assign)
{
	std::cout << "Copy assignment operator of \"Dog\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign._type;
		*this->_brain = *assign._brain;
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
