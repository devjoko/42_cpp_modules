/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:42:45 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/05 21:37:02 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

/* ************************************************************************** */
/*                                Weapon Class                                */
/* ************************************************************************** */

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	~Weapon();

	void setType(std::string type);
	const std::string& getType(void) const;
};

#endif /* WEAPON_H */
