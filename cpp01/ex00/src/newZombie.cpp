/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:58:36 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 20:04:09 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	newZombie( std::string name)
{
	Zombie *newZombie;
	
	try
	{
		newZombie = new Zombie;
	}
	catch (std::bad_alloc)
	{
		return (nullptr);
	}
	newZombie->setName(name);
	return (newZombie);
}
