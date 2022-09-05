/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:43:41 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 21:06:27 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main(void)
{
	Zombie *erika;
	Zombie *dieter;

	randomChump("Lotte");
	std::cout << std::endl;

	erika = newZombie("Erika");
	erika->announce();
	std::cout << std::endl;

	dieter = newZombie("Dieter");
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
