/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:58:36 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/20 23:02:38 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	newZombie( std::string name)
{
	Zombie *newZombie;
	
	newZombie = new Zombie;
	newZombie->setName(name);
	return (newZombie);
}
