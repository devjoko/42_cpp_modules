/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/28 03:26:29 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("CL4P-TP");

	for (int i = 0; i < 1; i++)
		clap.attack("the door");
	// test.beRepaired(5);
	clap.takeDamage(9);
	clap.beRepaired(5);
	return (0);
}

// yellow pink for other claptraps
// borderlands2 videos for quotes
// ascii line art ROBOTS