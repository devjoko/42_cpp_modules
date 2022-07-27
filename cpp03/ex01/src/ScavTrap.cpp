/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:45:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/27 02:37:15 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/ScavTrap.hpp"

/*	DEFAULT CONSTRUCTOR	*/
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Constructor ScavTrap" << std::endl;
	return ;
}

/*	PARAMETRIC CONSTRUCTOR	*/
ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	std::cout << "Parameteric Constructor ScavTrap" << std::endl;
	return ;
}

/*	COPY CONSTRUCTOR	*/
ScavTrap::ScavTrap( ClapTrap const &base, ScavTrap const &derived ) : ClapTrap( base )
{
	std::cout << "Copy Constructor ScavTrap" << std::endl;
	*this = derived;
	return ;
}

/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
// ScavTrap	&ScavTrap::operator=( ClapTrap const &base) 
// {
// 	return (*this);
// }

/*	DESTRUCTOR	*/
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string &target )
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}