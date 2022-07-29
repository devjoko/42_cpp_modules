/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:45:44 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 19:02:54 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

ScavTrap::ScavTrap() : ClapTrap(), _scavHp(100), _scavEn(50), _scavDmg(20)
{
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_maxHitpoints = 100;
	std::cout << "A default ScavTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _scavHp(100), _scavEn(50), _scavDmg(20)
{
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_maxHitpoints = 100;
	std::cout << "ScavTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : _scavHp(100), _scavEn(50), _scavDmg(20)
{
	std::cout << "ScavTrap has been copy constructed from " << copy.getName() << "." << std::endl;
	std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = copy;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &assign)
{
	if (this != &assign)
	{
		std::cout << "ScavTrap has been assigned from " << assign.getName() << "." << std::endl;
		std::cout << "\t\033[1;33m<|º감º|> I've been chosen to stand out here -- far, far away from everyone else!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = assign.getName();
		this->_hitpoints = assign.getHitpoints();
		this->_energy = assign.getEnergy();
		this->_damage = assign.getDamage();
		this->_maxHitpoints = assign.getMaxHitpoints();
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;33m<|x감x|> I shall wait here, a noble-yet-dangerous robot, alone, mysterious, desperate to be loved...\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
		std::cout << "\t\033[1;33m<|ò감ó|> I'm not to let ANYONE in through here!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_energy -= 1;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is fatally injured and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;33m<|x감x|> Arr!\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has no energy points left and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;33m<|x감x|> This one's all guarded-out, anyway!\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
	std::cout << "\t\033[1;33m<|ò감ó|> Halt, moon citizen!\033[0m" << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, const ScavTrap &obj)
{
	o << "ScavTrap " << obj.getName() << ": Fetching parameters!";
	o << "\tHP: " << obj.getHitpoints();
	o << "\tEN: " << obj.getEnergy();
	o << "\tAD: " << obj.getDamage() << std::endl;
	o << "\t\033[1;33m<|♥감♥|> Guarding Gates is FUN!\033[0m" << std::endl;
	o << std::endl;
	return (o);
}

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */
