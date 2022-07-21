/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:24:28 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/21 19:25:17 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

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

Zombie*	zombieHorde( int N, std::string name);

#endif /* ZOMBIE_H */
