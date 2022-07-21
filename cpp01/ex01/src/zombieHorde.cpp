/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:25:36 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 20:02:22 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name)
{
	Zombie	*zombieHorde;

	try
	{
		zombieHorde = new Zombie[N];
	}
	catch (std::bad_alloc)
	{
		std::cout << "Bad allocation of zombieHorde!" << std::endl;
		return (nullptr);
	}
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
