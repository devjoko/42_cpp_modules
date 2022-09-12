/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 23:34:35 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                      Let's show inheritance from ClapTrap.                 */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		{
			ClapTrap clap("CL4P-TP");
			std::cout << clap;
		}
		std::cout << "/* ************************************************************************** */" << std::endl;
		std::cout << std::endl;
		{
			ScavTrap scav("SC4V-TP");
			std::cout << scav;
		}
	}

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                          Let's oneshot our scavtrap.                       */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		ScavTrap scav("SC4V-TP");

		std::cout << scav;
		scav.takeDamage(4294967290);
		std::cout << scav;
		scav.beRepaired(10);
	}

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                                Let's make it fight!                        */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		ScavTrap scav("SC4V-TP");

		std::cout << scav;
		scav.guardGate();
		scav.attack("Darksider");
		scav.takeDamage(37);
		std::cout << scav;
		scav.beRepaired(100);
		scav.beRepaired(1);
		scav.guardGate();
		std::cout << scav;
	}

	return (0);
}
