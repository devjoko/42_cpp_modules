/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 02:42:53 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int	main(void)
{
	// std::cout << "/* ************************************************************************** */" << std::endl;
	// std::cout << "/*                      Let's show inheritance from ClapTrap.                 */" << std::endl;
	// std::cout << "/* ************************************************************************** */" << std::endl;
	// std::cout << std::endl;
	// {
	// 	// {
	// 	// 	ClapTrap	clap("CL4P-TP");
	// 	// 	std::cout << clap;
	// 	// }
	// 	// std::cout << "/* ************************************************************************** */" << std::endl;
	// 	// std::cout << std::endl;
	// 	{
	// 		DiamondTrap	diamond("D14M0ND-TP");
	// 		std::cout << diamond;
	// 		diamond.whoAmI();
	// 		std::cout << diamond.getDamage() << std::endl;
	// 		std::cout << diamond.getEnergy() << std::endl;
	// 		std::cout << diamond.getHitpoints() << std::endl;
	// 		// diamond.attack("test");
	// 		// diamond.guardGate();
	// 		// diamond.highFivesGuys();
	// 	}
	// }

	// std::cout << "/* ************************************************************************** */" << std::endl;
	// std::cout << "/*                          Let's oneshot our fragtrap.                       */" << std::endl;
	// std::cout << "/* ************************************************************************** */" << std::endl;
	// std::cout << std::endl;
	// {
	// 	FragTrap	frag("FR4G-TP");

	// 	std::cout << frag;
	// 	frag.takeDamage(4294967290);
	// 	std::cout << frag;
	// 	frag.beRepaired(10);
	// }

	// std::cout << "/* ************************************************************************** */" << std::endl;
	// std::cout << "/*                                Let's make it fight!                        */" << std::endl;
	// std::cout << "/* ************************************************************************** */" << std::endl;
	// std::cout << std::endl;
	// {
	// 	FragTrap	frag("FR4G-TP");

	// 	std::cout << frag;
	// 	frag.highFivesGuys();
	// 	frag.attack("Badass");
	// 	frag.takeDamage(98);
	// 	std::cout << frag;
	// 	frag.beRepaired(100);
	// 	frag.beRepaired(1);
	// 	frag.highFivesGuys();
	// 	std::cout << frag;
	// }

	{
		DiamondTrap di4mondtp("di4mondtp");
		di4mondtp.attack("Handsome Jack");
		di4mondtp.takeDamage(6);
		di4mondtp.beRepaired(4);
		di4mondtp.takeDamage(3);
		di4mondtp.guardGate();
		di4mondtp.highFivesGuys();
		di4mondtp.whoAmI();
		di4mondtp.beRepaired(8);
		di4mondtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		FragTrap fr4gtp("fr4gtp");
		fr4gtp.attack("Handsome Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ScavTrap sc4vtp("sc4vtp");
		sc4vtp.attack("Handsome Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	std::cout << "----------------------------------------" << std::endl;
	{
		ClapTrap cl4ptp("cl4ptp");
		cl4ptp.attack("Handsome Jack");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	}

	return (0);
}
