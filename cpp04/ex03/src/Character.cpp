/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:00:16 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/30 18:05:39 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

/* ************************************************************************** */
/*                                 Character Class                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Character::Character() : _name("default")
{
	std::cout << "Default Constructor Character" << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Parametric Constructor Character" << std::endl;
	return ;
}

Character::Character(const Character &rhs)
{
	std::cout << "Copy Constructor Character" << std::endl;
	// copy.. clone ? deep copy ??
}

Character	&Character::operator=(const Character &rhs)
{
	std::cout << "Copy Assignment Operator Character" << std::endl;
	// copy ..
	return (*this);
}

Character::~Character()
{
	std::cout << "Destructor Character" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	std::cout << "Equip materia of type " << m->getType() << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << &this->_inventory[i] << std::endl;
}

void Character::unequip(int idx)
{
	std::cout << "Unequip materia at inventory[" << idx << "]" << std::endl;
}

void Character::use(int idx, ICharacter & target)
{
	std::cout << "Use materia " << idx << " on " << target.getName() << std::endl;
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                 Character Class                            */
/* ************************************************************************** */
