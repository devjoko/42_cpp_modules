/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:46:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/29 01:06:09 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

ClapTrap::ClapTrap() : _name("default"), _hitpoints(10), _energy(10), _damage(0), _maxHitpoints(10)
{
	std::cout << "A default ClapTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _damage(0), _maxHitpoints(10)
{
	std::cout << "ClapTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitpoints, unsigned int energy, unsigned int damage) : _name(name), _hitpoints(hitpoints), _energy(energy), _damage(damage), _maxHitpoints(hitpoints)
{
	std::cout << "ClapTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap has been copy constructed from " << copy.getName() << "." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &assign)
{
	if (this != &assign)
	{
		std::cout << "ClapTrap has been assigned from " << assign.getName() << "." << std::endl;
		std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = assign.getName();
		this->_hitpoints = assign.getHitpoints();
		this->_energy = assign.getEnergy();
		this->_damage = assign.getDamage();
		this->_maxHitpoints = assign.getMaxHitpoints();
	}
	return ( *this );
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->getName() << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;36md[x_X]b Do your master proud!\033[0m" << std::endl;
	std::cout << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
		std::cout << "\t\033[1;36md[o_0]b What?! I said \"AAAAAND open!\"\033[0m" << std::endl;
		std::cout << std::endl;
		this->_energy -= 1;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is fatally injured and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;36md[T_T]b [sobbing]\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no energy points left and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;36md[X_x]b STAIRS?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	hpLost;

	if (this->_hitpoints > 0)
	{
		if (this->_hitpoints < amount)
		{
			hpLost = _hitpoints;
			this->_hitpoints = 0;
		}
		else
		{
			hpLost = amount;
			this->_hitpoints -= amount;
		}
		std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " damage and lost " << hpLost << " hitpoints!" << std::endl;
		if (this->_hitpoints == 0)
			std::cout << "ClapTrap " << this->getName() << " is fatally injured!" << std::endl;
		std::cout << "\t\033[1;36md[o_0]b NO! Don't dispatch MORE troops! I'm sorry! I'm sorry pretty female voice!\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is fatally injured and cannot be hurt more!" << std::endl;
		std::cout << "\t\033[1;36md[T_T]b [sobbing]\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	hpGained;
	
	if (this->_hitpoints == _maxHitpoints && this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has full health and cannot repair itself!" << std::endl;
		std::cout << "\t\033[1;36md[^_^]b Can I shoot something now? Or climb some stairs? SOMETHING exciting?\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_hitpoints > 0 && this->_energy > 0)
	{
		if (amount > _maxHitpoints - this->_hitpoints)
			hpGained = _maxHitpoints - this->_hitpoints;
		else
			hpGained = amount;
		std::cout << "ClapTrap " << this->getName() << " repaired itself and restored " << hpGained << " hitpoints!" << std::endl;
		std::cout << "\t\033[1;36md[^_^]b HOLY ****! IT ACTUALLY WORKED!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_hitpoints += hpGained;
		this->_energy -= 1;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is fatally injured and cannot repair itself!" << std::endl;
		std::cout << "\t\033[1;36md[T_T]b [sobbing]\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has no energy points left and cannot repair itself!" << std::endl;
		std::cout << "\t\033[1;36md[X_x]b STAIRS?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (this->_damage);
}

unsigned int	ClapTrap::getMaxHitpoints(void) const
{
	return (this->_maxHitpoints);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &o, const ClapTrap &obj)
{
	o << "ClapTrap " << obj.getName() << ": Fetching parameters!";
	o << "\tHP: " << obj.getHitpoints();
	o << "\tEN: " << obj.getEnergy();
	o << "\tAD: " << obj.getDamage() << std::endl;
	o << "\t\033[1;36md[o_0]b Allow me to introduce myself -- I am a CL4P-TP steward robot, but my friends call me Claptrap!\033[0m" << std::endl;
	o << std::endl;
	return (o);
}

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */
