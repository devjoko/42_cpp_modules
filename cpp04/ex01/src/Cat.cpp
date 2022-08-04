/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:46:33 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/04 20:42:38 by jpfuhl           ###   ########.fr       */
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
	this->_brain = new Brain();
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Parametric constructor of \"Cat\"" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor of \"Cat\"" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	return ;
}

Cat	&Cat::operator=(const Cat &assign)
{
	std::cout << "Copy assignment operator of \"Cat\"" << std::endl;
	if (this != &assign)
	{
		this->_type = assign._type;
		*this->_brain = *assign._brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of \"Cat\"" << std::endl;
	delete this->_brain;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "Cat makes \"Meeeooow!!\"" << std::endl;
}

void	Cat::printBrain(void)
{
	std::cout << "Brain Address: " << &this->_brain << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */


/* ************************************************************************** */
/*                                  Animal Class                              */
/* ************************************************************************** */
