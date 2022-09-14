/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:48:09 by jpfuhl            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/14 21:00:41 by jpfuhl           ###   ########.fr       */
=======
/*   Updated: 2022/09/14 20:37:35 by jpfuhl           ###   ########.fr       */
>>>>>>> 2e619b1b9cad6adb1bf373f58f2f9f40b4dcde79
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include <stdexcept>

<<<<<<< HEAD
/* ************************************************************************** */
/*                                 Intern Class                               */
/* ************************************************************************** */

=======
>>>>>>> 2e619b1b9cad6adb1bf373f58f2f9f40b4dcde79
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