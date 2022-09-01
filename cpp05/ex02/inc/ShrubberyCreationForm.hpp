/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:26:04 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 17:21:20 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "AForm.hpp"

/* ************************************************************************** */
/*                         ShrubberyCreationForm Class                        */
/* ************************************************************************** */

class ShrubberyCreationForm : public AForm
{
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};

#endif /* SHRUBBERYCREATIONFORM_H */
