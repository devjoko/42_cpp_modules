/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:44:26 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/20 23:08:47 by jpfuhl           ###   ########.fr       */
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

	void		randomChump( std::string name );
	Zombie*		newZombie( std::string name);
	void		announce( void );
	void		setName( std::string name );
	std::string	getName( void ) const;
};

#endif /* ZOMBIE_H */
