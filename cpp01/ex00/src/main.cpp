/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:43:41 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 20:03:37 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Zombie.hpp"

int	main(void)
{
	Zombie	*erika;
	Zombie	*dieter;

	randomChump("Lotte");
	std::cout << std::endl;

	erika = newZombie("Erika");
	if (erika == nullptr)
		return (-1);
	erika->announce();
	std::cout << std::endl;

	dieter = newZombie("Dieter");
	if (dieter == nullptr)
		return (-1);
	dieter->announce();
	std::cout << "Dieter underwent some plastic surgery and is now a female zombie. Pretty cool, huh?" << std::endl;
	dieter->setName("Dieterlinde");
	dieter->announce();
	std::cout << std::endl;

	std::cout << "Kill 'em with fire!" << std::endl;
	delete erika;
	delete dieter;
	return (0);
}
