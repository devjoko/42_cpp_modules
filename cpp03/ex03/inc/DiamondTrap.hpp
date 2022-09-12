/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:24:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 16:51:10 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/* ************************************************************************** */
/*                                DiamondTrap Class                           */
/* ************************************************************************** */

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& rhs);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& rhs);
	
	void attack(const std::string& target);
	void whoAmI(void);

	std::string	getDiamondName(void) const;
};

std::ostream& operator<<(std::ostream& out, const DiamondTrap& obj);

#endif /* DIAMONDTRAP_H */
