/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 19:28:05 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/* ************************************************************************** */
/*                                    Cat Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Cat::Cat() : Animal()
{
	std::cout << "Default constructor of \"Cat\"" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Parametric constructor of \"Cat\"" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor of \"Cat\"" << std::endl;
	*this = copy;
	return ;
}

Cat	&Cat::operator=(const Cat &assign)
{
	std::cout << "Assignment operator overload of \"Cat\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of \"Cat\"" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "Cat makes \"Meeeooow!!\"" << std::endl;
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
