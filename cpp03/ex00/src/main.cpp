/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:03:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 23:34:09 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                           Let's oneshot our claptrap.                      */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		ClapTrap claptrap("CL4P-TP");

		std::cout << claptrap;
		claptrap.takeDamage(4294967290);
		std::cout << claptrap;
		claptrap.beRepaired(10);
	}

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*             Let's make it attack until it has no more energy               */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		ClapTrap claptrap("CL4P-TP");

		std::cout << claptrap;
		for (int i = 0; i < 11; i++)
			claptrap.attack("DOOR");
		std::cout << claptrap;
		claptrap.beRepaired(5);
	}

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                                Let's make it fight!                        */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	{
		ClapTrap claptrap("CL4P-TP");

		std::cout << claptrap;
		claptrap.attack("DOOR");
		claptrap.takeDamage(5);
		claptrap.beRepaired(7);
		std::cout << claptrap;
		claptrap.beRepaired(5);
		std::cout << claptrap;
		claptrap.attack("DOOR");
		claptrap.takeDamage(4);
		claptrap.beRepaired(2);
		std::cout << claptrap;
	}

	return (0);
}
