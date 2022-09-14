/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:28:08 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 19:10:33 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

# include "AForm.hpp"

/* ************************************************************************** */
/*                        PresidentialPardonForm Class                        */
/* ************************************************************************** */

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& rhs);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

	void execute(const Bureaucrat& executor) const;
};

#endif /* PRESIDENTIAL_PARDON_FORM_H */
