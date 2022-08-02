/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:42:15 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 22:52:21 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_H
# define ICE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

/* ************************************************************************** */
/*                                   Ice Class                                */
/* ************************************************************************** */

class	Ice : public AMateria
{
public:
	Ice();
	~Ice();

	void	use(ICharacter &target);
};

#endif /* ICE_H */
