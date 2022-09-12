/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:56:51 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 17:05:50 by jpfuhl           ###   ########.fr       */
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
	this->_hitpoints = FragTrap::_fragHp;
	this->_energy = ScavTrap::_scavHp;
	this->_damage = FragTrap::_fragDmg;
	this->_maxHitpoints = FragTrap::_fragHp;
	std::cout << "A default DiamondTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitpoints = FragTrap::_fragHp;
	this->_energy = ScavTrap::_scavEn;
	this->_damage = FragTrap::_fragDmg;
	this->_maxHitpoints = FragTrap::_fragHp;
	std::cout << "DiamondTrap " << this->getDiamondName() << " has been constructed." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
{
	std::cout << "DiamondTrap has been copy constructed from " << rhs.getDiamondName() << "." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->getDiamondName() << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;31m♢[x┬x]♢ Until we meet again on the battlefield, friendo!\033[0m" << std::endl;
	std::cout << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout << "DiamondTrap has been assigned from " << rhs.getDiamondName() << "." << std::endl;
		std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = rhs.getDiamondName();
		this->_hitpoints = rhs.getHitpoints();
		this->_energy = rhs.getEnergy();
		this->_damage = rhs.getDamage();
		this->_maxHitpoints = rhs.getMaxHitpoints();
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap is called " << this->_name << " and derives from ClapTrap " << this->getName() << "." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Disgusting. I love it!\033[0m" << std::endl;
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string DiamondTrap::getDiamondName(void) const
{
	return (this->_name);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const DiamondTrap& obj)
{
	out << "DiamondTrap " << obj.getDiamondName() << ": Fetching parameters!";
	out << "\tHP: " << obj.getHitpoints();
	out << "\tEN: " << obj.getEnergy();
	out << "\tAD: " << obj.getDamage() << std::endl;
	out << "\t\033[1;31m♢[⟢┬⟣]♢ Check me out!\033[0m" << std::endl;
	out << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                 FragTrap Class                             */
/* ************************************************************************** */
