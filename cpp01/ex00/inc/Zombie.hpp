/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:44:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 23:20:49 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

/* ************************************************************************** */
/*                                Zombie Class                                */
/* ************************************************************************** */

class	Zombie
{
private:
	std::string	name;
public:
	Zombie( void );
	~Zombie( void );

	void		announce( void );
	void		setName( std::string name );
	std::string	getName( void ) const;
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name );

#endif /* ZOMBIE_H */
