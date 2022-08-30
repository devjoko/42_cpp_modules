/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:51:40 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/30 18:17:12 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_H
# define CURE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

/* ************************************************************************** */
/*                                    Cure Class                              */
/* ************************************************************************** */

class	Cure : virtual public AMateria // do i have to write virtual ?
{
public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure &rhs);
	Cure &operator=(const Cure &rhs);
	~Cure();

	AMateria * clone(void) const;
	void	use(ICharacter &target);
};

#endif /* CURE_H */
