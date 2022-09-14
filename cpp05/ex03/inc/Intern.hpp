/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:04:42 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 21:04:52 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include <stdexcept>

/* ************************************************************************** */
/*                                 Intern Class                               */
/* ************************************************************************** */

class AForm;

class Intern
{
public:
	Intern();
	Intern(const Intern& rhs);
	~Intern();

	Intern& operator=(const Intern& rhs);

	AForm* makeForm(const std::string form, const std::string target) const;

	class FailedFormCreation : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("Intern couldn't create form");
		}
	};
};

#endif /* INTERN_H */