/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:24:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/12 15:45:07 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& rhs);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& rhs);

	void attack(const std::string& target);
	void guardGate(void);
};

std::ostream& operator<<(std::ostream& out, const ScavTrap& obj);

#endif /* SCAVTRAP_H */
