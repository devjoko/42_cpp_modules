/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:24:14 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/27 02:36:49 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include "ClapTrap.hpp"

/* ************************************************************************** */
/*                                 ScavTrap Class                             */
/* ************************************************************************** */

class	ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( ClapTrap const &base, ScavTrap const &derived );
	// ScavTrap	&operator=( ClapTrap const &base);
	~ScavTrap();

	void	attack( const std::string &target );
	void	guardGate( void );
};

#endif /* SCAVTRAP_H */