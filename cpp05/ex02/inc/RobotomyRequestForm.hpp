/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:28:05 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/01 17:16:40 by jpfuhl           ###   ########.fr       */
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
private:
	RobotomyRequestForm();
	RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & rhs);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};

#endif /* ROBOTOMY_REQUEST_FORM_H */
