/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 22:51:40 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/08/02 22:52:30 by jpfuhl           ###   ########.fr       */
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

class	Cure : public AMateria
{
public:
	Cure();
	~Cure();

	void	use(ICharacter &target);
};

#endif /* CURE_H */
