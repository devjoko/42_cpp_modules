/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 01:18:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 01:42:46 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/HumanB.hpp"

/*	CONSTRUCTOR	*/
HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

/*	DECONSTRUCTOR	*/
HumanB::~HumanB()
{
	return ;
}

/*	METHODS	*/
void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
