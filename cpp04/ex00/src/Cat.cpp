/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/30 15:22:09 by jpfuhl           ###   ########.fr       */
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
	std::cout << "CAT : Default constructor" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "CAT : Parametric constructor" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "CAT : Copy constructor" << std::endl;
	*this = copy;
	return ;
}

Cat	&Cat::operator=(const Cat &assign)
{
	std::cout << "CAT : Assignment operator overload" << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "CAT : Destructor" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "Meeeooow!!" << std::endl;
}

/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
