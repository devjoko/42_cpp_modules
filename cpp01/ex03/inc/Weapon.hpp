/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:42:45 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/22 01:40:40 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H

# include <string>

/* ************************************************************************** */
/*                                Weapon Class                                */
/* ************************************************************************** */

class	Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon( std::string type );
	~Weapon();

	void				setType( std::string type );
	const std::string&	getType( void ) const;
	// is this correct? return const reference to type
};

#endif /* WEAPON_H */
