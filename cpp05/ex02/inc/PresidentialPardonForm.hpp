/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:28:08 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 17:19:58 by jpfuhl           ###   ########.fr       */
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
private:
	PresidentialPardonForm();
	PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm & rhs);
	~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};

#endif /* PRESIDENTIAL_PARDON_FORM_H */
