/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:00:18 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 23:05:47 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_H
# define CHARACTER_H

# include "../inc/ICharacter.hpp"

/* ************************************************************************** */
/*                                 Character Class                            */
/* ************************************************************************** */

class	Character : public ICharacter
{
private:
	std::string	_name;
public:
	Character();
	Character(std::string name);
	~Character();
};

#endif /* CHARACTER_H */