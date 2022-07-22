/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:50:03 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 19:08:56 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Weapon.hpp"

/*	CONSTRUCTOR	*/

Weapon::Weapon(std::string type) : type(type) { return ; }

/*	DECONSTRUCTOR	*/
Weapon::~Weapon() { return ; }

/*	SETTER	*/
void	Weapon::setType(std::string type)
{
	this->type = type;
}

/*	GETTER	*/
const std::string&	Weapon::getType(void) const
{
	return (this->type);
	// is this correct? return const reference to type
}
