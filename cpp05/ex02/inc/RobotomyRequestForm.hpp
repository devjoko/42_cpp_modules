/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:28:05 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 19:24:48 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

# include "AForm.hpp"

/* ************************************************************************** */
/*                         RobotomyRequestForm Class                          */
/* ************************************************************************** */

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& rhs);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

	void execute(const Bureaucrat& executor) const;
};

#endif /* ROBOTOMY_REQUEST_FORM_H */
