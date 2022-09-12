/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 00:46:31 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 14:52:17 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

ClapTrap::ClapTrap()
: _name("default"), _hitpoints(10), _energy(10), _damage(0)
{
	std::cout << "A default ClapTrap has been constructed." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitpoints(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << name << " has been constructed." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	std::cout << "ClapTrap has been copy constructed from " << rhs._name << "." << std::endl;
	std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
	std::cout << std::endl;
	*this = rhs;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " has been left behind."<< std::endl;
	std::cout << "\t\033[1;36md[x_X]b Do your master proud!\033[0m" << std::endl;
	std::cout << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		std::cout << "ClapTrap has been assigned from " << rhs._name << "." << std::endl;
		std::cout << "\t\033[1;36md[o_0]b Aaaand OPEN!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energy = rhs._energy;
		this->_damage = rhs._damage;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitpoints > 0 && this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		std::cout << "\t\033[1;36md[o_0]b What?! I said \"AAAAAND open!\"\033[0m" << std::endl;
		std::cout << std::endl;
		this->_energy -= 1;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is fatally injured and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;36md[T_T]b [sobbing]\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left and cannot attack " << target << "!" << std::endl;
		std::cout << "\t\033[1;36md[X_x]b STAIRS?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int hpLost;

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
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage and lost " << hpLost << " hitpoints!" << std::endl;
		if (this->_hitpoints == 0)
			std::cout << "ClapTrap " << this->_name << " is fatally injured!" << std::endl;
		std::cout << "\t\033[1;36md[o_0]b NO! Don't dispatch MORE troops! I'm sorry! I'm sorry pretty female voice!\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is fatally injured and cannot be hurt more!" << std::endl;
		std::cout << "\t\033[1;36md[T_T]b [sobbing]\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int hpGained;
	
	if (this->_hitpoints == 10 && this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has full health and cannot repair itself!" << std::endl;
		std::cout << "\t\033[1;36md[^_^]b Can I shoot something now? Or climb some stairs? SOMETHING exciting?\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_hitpoints > 0 && this->_energy > 0)
	{
		if (amount > 10 - this->_hitpoints)
			hpGained = 10 - this->_hitpoints;
		else
			hpGained = amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and restored " << hpGained << " hitpoints!" << std::endl;
		std::cout << "\t\033[1;36md[^_^]b HOLY ****! IT ACTUALLY WORKED!\033[0m" << std::endl;
		std::cout << std::endl;
		this->_hitpoints += hpGained;
		this->_energy -= 1;
	}
	else if (this->_hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is fatally injured and cannot repair itself!" << std::endl;
		std::cout << "\t\033[1;36md[T_T]b [sobbing]\033[0m" << std::endl;
		std::cout << std::endl;
	}
	else if (this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left and cannot repair itself!" << std::endl;
		std::cout << "\t\033[1;36md[X_x]b STAIRS?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!\033[0m" << std::endl;
		std::cout << std::endl;
	}
}

/* ************************************************************************** */
/*                                   Accessor                                 */
/* ************************************************************************** */

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

unsigned int ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

unsigned int ClapTrap::getDamage(void) const
{
	return (this->_damage);
}

/* ************************************************************************** */
/*                              Non-Member Functions                          */
/* ************************************************************************** */

std::ostream& operator<<(std::ostream& out, const ClapTrap& obj)
{
	out << "ClapTrap " << obj.getName() << ": Fetching parameters!";
	out << "\tHP: " << obj.getHitpoints();
	out << "\tEN: " << obj.getEnergy();
	out << "\tAD: " << obj.getDamage() << std::endl;
	out << "\t\033[1;36md[o_0]b Allow me to introduce myself -- I am a CL4P-TP steward robot, but my friends call me Claptrap!\033[0m" << std::endl;
	out << std::endl;
	return (out);
}

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */
