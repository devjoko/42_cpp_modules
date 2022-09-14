/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:48:09 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 20:37:35 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include <stdexcept>

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