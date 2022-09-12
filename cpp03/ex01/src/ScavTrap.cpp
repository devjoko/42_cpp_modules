/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:45:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 16:06:43 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

ScavTrap::ScavTrap()
: ClapTrap()
{
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_maxHitpoints = 100;
	std::cout << "A default ScavTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_maxHitpoints = 100;
	std::cout << "ScavTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
{
	std::cout << "ScavTrap has been copy constructed from " << rhs._name << "." << std::endl;
	std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = rhs;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;33m<|x감x|> I shall wait here, a noble-yet-dangerous robot, alone, mysterious, desperate to be loved...\033[0m" << std::endl;
	std::cout << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout << "ScavTrap has been assigned from " << rhs._name << "." << std::endl;
		std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
		this->_maxHitpoints = rhs._maxHitpoints;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void ScavTrap::attack(const std::string& target)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		std::cout << "\t\033[1;33m<|ò감ó|> I'm not to let ANYONE in through here!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_energy -= 1;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is fatally injured and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;33m<|x감x|> Arr!\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points left and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;33m<|x감x|> This one's all guarded-out, anyway!\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
	std::cout << "\t\033[1;33m<|ò감ó|> Halt, moon citizen!\033[0m" << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const ScavTrap& obj)
{
	out << "ScavTrap " << obj.getName() << ": Fetching parameters!";
	out << "\tHP: " << obj.getHitpoints();
	out << "\tEN: " << obj.getEnergy();
	out << "\tAD: " << obj.getDamage() << std::endl;
	out << "\t\033[1;33m<|♥감♥|> Guarding Gates is FUN!\033[0m" << std::endl;
	out << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */
