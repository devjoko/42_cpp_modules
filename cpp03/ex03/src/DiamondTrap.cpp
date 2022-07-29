/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:56:51 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 21:09:34 by jpfuhl           ###   ########.fr       */
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
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitpoints = FragTrap::_fragHp;
	this->_energy = ScavTrap::_scavEn;
	this->_damage = FragTrap::_fragDmg;
	this->_maxHitpoints = FragTrap::_fragHp;
	std::cout << "DiamondTrap " << getDiamondName() << " has been constructed." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	std::cout << "DiamondTrap has been copy constructed from " << copy.getDiamondName() << "." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = copy;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &assign)
{
	if (this != &assign)
	{
		std::cout << "DiamondTrap has been assigned from " << assign.getDiamondName() << "." << std::endl;
		std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Look out everybody! Things are about to get awesome!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = assign.getDiamondName();
		this->_hitpoints = assign.getHitpoints();
		this->_energy = assign.getEnergy();
		this->_damage = assign.getDamage();
		this->_maxHitpoints = assign.getMaxHitpoints();
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " has been left behind."<< std::endl;
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
	std::cout << "DiamondTrap is called " << this->_name << " and derives from ClapTrap " << this->getName() << "." << std::endl;
	std::cout << "\t\033[1;31m♢[⟢┬⟣]♢ Disgusting. I love it!\033[0m" << std::endl;
	std::cout << std::endl;
}

std::string	DiamondTrap::getDiamondName(void) const
{
	return (this->_name);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, const DiamondTrap &obj)
{
	o << "DiamondTrap " << obj.getDiamondName() << ": Fetching parameters!";
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
