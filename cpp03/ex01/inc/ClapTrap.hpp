/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:27:58 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/07/27 00:59:24 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

/* ************************************************************************** */
/*                                 ClapTrap Class                             */
/* ************************************************************************** */

class	ClapTrap
{
private:
	std::string	name_; // const ?
	int			hitPoints_;
	int			energyPoints_;
	int			attackDamage_;
public:
	ClapTrap();
	ClapTrap( const std::string &name );
	ClapTrap( ClapTrap const &copy );
	ClapTrap	&operator=( ClapTrap const &clapTrap );
	~ClapTrap();

	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	std::string	getName( void ) const;
	int			getHitPoints( void ) const;
	int			getEnergyPoints( void ) const;
	int			getAttackDamage( void ) const;
};


#endif /* CLAPTRAP_H */