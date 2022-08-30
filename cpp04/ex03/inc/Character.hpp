/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:00:18 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/30 17:55:31 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

/* ************************************************************************** */
/*                                 Character Class                            */
/* ************************************************************************** */

class	Character : virtual public ICharacter // do i have to write virtual ?
{
private:
	std::string _name;
	AMateria * _inventory[4];
public:
	Character();
	Character(std::string name);
	Character(const Character &rhs);
	Character	&operator=(const Character &rhs);
	~Character();

	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);
};

#endif /* CHARACTER_H */
