/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:46:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/27 01:20:47 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ClapTrap.hpp"

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

/*	DEFAULT CONSTRUCTOR	*/
ClapTrap::ClapTrap() : name_(""), hitPoints_ (10), energyPoints_ (10), attackDamage_(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/*	PARAMETRIC CONSTRUCTOR	*/
ClapTrap::ClapTrap( const std::string &name ) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

/*	COPY CONSTRUCTOR	*/
ClapTrap::ClapTrap( ClapTrap const &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
ClapTrap	&ClapTrap::operator=( ClapTrap const &clapTrap )
{
	std::cout << "Copy assignment operator overload called" << std::endl;
	if (this != &clapTrap)
	{
		this->name_ = clapTrap.getName();
		this->hitPoints_ = clapTrap.getHitPoints();
		this->energyPoints_ = clapTrap.getEnergyPoints();
		this->attackDamage_ = clapTrap.getAttackDamage();
	}
	return ( *this );
}

/*	DESTRUCTOR	*/
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	ClapTrap::attack( const std::string &target )
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->energyPoints_ > 0)
	{
		std::cout << "ClapTrap is wounded!" << std::endl;
		this->hitPoints_ -= amount;
	}
	else
	{
		std::cout << "ClapTrap has no hit points left and can't do anything." << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->energyPoints_  > 0)
	{
		std::cout << "ClapTrap repairs itself!" << std::endl;
		this->hitPoints_ += amount;
		this->energyPoints_ -= 1;
	}
	else
	{
		std::cout << "ClapTrap has no energy points left and can't do anything." << std::endl;
	}
}

/*	GETTER	*/
std::string	ClapTrap::getName( void ) const
{
	return ( this->name_ );
}

int	ClapTrap::getHitPoints( void ) const
{
	return ( this->hitPoints_ );
}

int	ClapTrap::getEnergyPoints( void ) const
{
	return ( this->energyPoints_ );
}

int	ClapTrap::getAttackDamage( void ) const
{
	return ( this->attackDamage_ );
}
