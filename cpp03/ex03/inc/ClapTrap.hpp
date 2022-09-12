/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:27:58 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 16:40:08 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hitpoints;
	unsigned int _energy;
	unsigned int _damage;
	unsigned int _maxHitpoints;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, unsigned int hitpoints, unsigned int energy, unsigned int damage);
	ClapTrap(const ClapTrap& rhs);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	unsigned int getHitpoints(void) const;
	unsigned int getEnergy(void) const;
	unsigned int getDamage(void) const;
	unsigned int getMaxHitpoints(void) const;
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& obj);

#endif /* CLAPTRAP_H */
