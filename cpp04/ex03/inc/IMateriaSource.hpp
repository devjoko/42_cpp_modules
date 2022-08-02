/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:31:57 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 22:35:32 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

/* ************************************************************************** */
/*                             IMateriaSource Class                           */
/* ************************************************************************** */

class	IMateriaSource
{
public:
	virtual ~IMateriaSource();
	virtual void		learnMateria(AMateria *) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif /* IMATERIASOURCE_H */