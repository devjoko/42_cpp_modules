/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:56:51 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 02:38:07 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

/* ************************************************************************** */
/*                                DiamondTrap Class                           */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

DiamondTrap::DiamondTrap()
{
	this->_hitpoints = FragTrap::getHitpoints();
	this->_energy = ScavTrap::getEnergy();
	this->_damage = FragTrap::getDamage();
	this->_maxHitpoints = FragTrap::getMaxHitpoints();
	std::cout << "A default DiamondTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_maxHitpoints = FragTrap::_maxHitpoints;
	std::cout << "DiamondTrap " << this->_name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << *this << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap has been copy constructed from " << copy.getName() << "." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = copy;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &assign)
{
	if (this != &assign)
	{
		std::cout << "DiamondTrap has been assigned from " << assign.getName() << "." << std::endl;
		std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = assign.getName();
		this->_hitpoints = assign.getHitpoints();
		this->_energy = assign.getEnergy();
		this->_damage = assign.getDamage();
		this->_maxHitpoints = assign.getMaxHitpoints();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getName() << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;31m♢[x┬x]♢ Until we meet again on the battlefield, friendo!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap is called " << DiamondTrap::_name << " and derives from ClapTrap " << this->getName() << "." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Disgusting. I love it!\033[0m" << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, const DiamondTrap &obj)
{
	o << "DiamondTrap " << obj.getName() << ": Fetching parameters!";
	o << "\tHP: " << obj.getHitpoints();
	o << "\tEN: " << obj.getEnergy();
	o << "\tAD: " << obj.getDamage() << std::endl;
	o << "\t\033[1;31m♢[⟢┬⟣]♢ Check me out!\033[0m" << std::endl;
	o << std::endl;
	return (o);
}

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */
