/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:42:15 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/30 18:16:17 by jpfuhl           ###   ########.fr       */
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

class	Ice : virtual public AMateria // do i have to write virtual ?
{
public:
	Ice();
	Ice(std::string const &type);
	Ice(const Ice &rhs);
	Ice	&operator=(const Ice &rhs);
	~Ice();

	AMateria	*clone(void) const;
	void	use(ICharacter &target);
};

#endif /* ICE_H */
