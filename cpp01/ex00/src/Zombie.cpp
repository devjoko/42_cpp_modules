/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:51:32 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 18:55:13 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

/*	CONSTRUCTOR	*/
Zombie::Zombie( void )
{
	std::cout << "A new zombie arrived into this world!" << std::endl;
	this->name = "";
	return ;
}

/*	DECONSTRUCTOR	*/
Zombie::~Zombie( void )
{
	std::cout << "R.I.P. : " << this->getName() << " has been killed.. Graargh!!" << std::endl;
	return ;
}

/*	METHODS	*/
void	Zombie::announce( void )
{
	std::cout << this->getName() << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

/*	SETTER	*/
void	Zombie::setName( std::string name )
{
	this->name = name;
}

/*	GETTER	*/
std::string	Zombie::getName( void ) const
{
	return (this->name);
}
