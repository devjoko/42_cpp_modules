/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 23:36:31 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

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
		std::cout << "/* ************************************************************************** */" << std::endl;
		std::cout << std::endl;
		{
			FragTrap frag("FR4G-TP");
			std::cout << frag;
		}
	}

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                          Let's oneshot our fragtrap.                       */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		FragTrap frag("FR4G-TP");

		std::cout << frag;
		frag.takeDamage(4294967290);
		std::cout << frag;
		frag.beRepaired(10);
	}

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                                Let's make it fight!                        */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		FragTrap frag("FR4G-TP");

		std::cout << frag;
		frag.highFivesGuys();
		frag.attack("Badass");
		frag.takeDamage(98);
		std::cout << frag;
		frag.beRepaired(100);
		frag.beRepaired(1);
		frag.highFivesGuys();
		std::cout << frag;
	}

	return (0);
}
