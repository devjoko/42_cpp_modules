/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Demo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:18:04 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 17:16:59 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Demo.hpp"

/* ************************************************************************** */
/*                                   Demo Class                               */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

Demo::Demo()
: _demoRunning(false)
{}

Demo::Demo(const Demo& rhs)
{
	*this = rhs;
}

Demo::~Demo() {}

Demo& Demo::operator=(const Demo& rhs)
{
	if (this != &rhs)
	{
		this->_demoRunning = rhs._demoRunning;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void Demo::runDemo(void)
{
	std::string input;
	int index;

	index = -1;
	this->_demoRunning = true;
	this->_printInfo();
	while (_demoRunning)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (this->_checkInput(input, index))
			this->_chooseExample(index);
	}
}

bool Demo::_checkInput(std::string input, int& index)
{
	try
	{
		if (input.length() > 1)
			return (false);
		index = stoi(input);
	}
	catch (...)
	{
		return (false);
	}
	return (true);
}

void Demo::_chooseExample(int index)
{
	switch (index)
	{
		case 1:
			this->_printInfo();
			break ;
		case 2:
			this->_showHybridInheritance();
			break ;
		case 3:
			this->_showConstructor();
			break ;
		case 4:
			this->_showDeath();
			break ;
		case 5:
			this->_showInheritedFunctions();
			break ;
		case 6:
			this->_showFight();
			break ;
		case 7:
			this->_exitDemo();
			break ;
		default:
			return ;
	}
}

void Demo::_printInfo(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                             <DiamondTrap> Demo                             */" << std::endl;
	std::cout << "/*          Please enter a number for the behaviour you want to see!          */" << std::endl;
	std::cout << "/*                            [1] Info                                        */" << std::endl;
	std::cout << "/*                            [2] Hybrid Inheritance                          */" << std::endl;
	std::cout << "/*                            [3] Constructor Behaviour                       */" << std::endl;
	std::cout << "/*                            [4] Death                                       */" << std::endl;
	std::cout << "/*                            [5] Inherited Functions                         */" << std::endl;
	std::cout << "/*                            [6] Fight Simulation                            */" << std::endl;
	std::cout << "/*                            [7] EXIT                                        */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
}

void Demo::_showHybridInheritance(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*         DiamondTrap's Hybrid Inheritance aka \"Diamond Problem\"           */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap diamond("D14M0ND-TP");
	diamond.whoAmI();
	std::cout << diamond;
}

void	Demo::_showConstructor(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                      DiamondTrap Constructor Behaviour                     */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap diamond("D14M0ND-TP");

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap copy("CHEAP-COPY");

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap clone(diamond);

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	copy = diamond;

	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	std::cout << diamond;
	std::cout << copy;
	std::cout << clone;
}

void Demo::_showDeath(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                            DiamondTrap gets one-shot                       */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap diamond("D14M0ND-TP");

	std::cout << diamond;
	diamond.takeDamage(4294967290);
	std::cout << diamond;
	diamond.beRepaired(10);
}

void Demo::_showInheritedFunctions(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*    DiamondTrap inherits functions from ClapTrap, ScavTrap and FragTrap     */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap diamond("D14M0ND-TP");

	diamond.whoAmI();
	diamond.attack("Enemy");
	diamond.beRepaired(25);
	diamond.guardGate();
	diamond.highFivesGuys();
}

void Demo::_showFight(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                          DiamondTrap Fight Simulation                      */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;

	DiamondTrap diamond("D14M0ND-TP");

	std::cout << diamond;
	diamond.attack("Enemy");
	diamond.takeDamage(98);
	std::cout << diamond;
	diamond.beRepaired(34);
	diamond.takeDamage(123);
	diamond.attack("Enemy");
	std::cout << diamond;
}

void Demo::_exitDemo(void)
{
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << "/*                                    EXIT Demo                               */" << std::endl;
	std::cout << "/* ************************************************************************** */" << std::endl;
	std::cout << std::endl;
	this->_demoRunning = false;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

bool Demo::getStatus(void) const
{
	return (this->_demoRunning);
}

/* ************************************************************************** */
/*                                   Demo Class                               */
/* ************************************************************************** */
