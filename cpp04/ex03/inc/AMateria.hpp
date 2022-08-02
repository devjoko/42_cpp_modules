/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:16:09 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 22:48:11 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>

# include "ICharacter.hpp"

/* ************************************************************************** */
/*                                AMateria Class                              */
/* ************************************************************************** */

class	AMateria
{
protected:
	std::string	_type;

public:
	AMateria();
	AMateria(std::string const &type);
	virtual ~AMateria();
	
	std::string const	&getType(void) const;
	
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif /* AMATERIA_H */