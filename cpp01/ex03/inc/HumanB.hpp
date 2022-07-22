/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:57:55 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 19:05:45 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include "Weapon.hpp"

/* ************************************************************************** */
/*                                HumanB Class                                */
/* ************************************************************************** */

class	HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB( std::string name );
	~HumanB();

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon );
};

#endif /* HUMANB_H */
