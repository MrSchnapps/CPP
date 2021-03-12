/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 17:51:27 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:52:52 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** Constructor - Destructor - Copy
*/

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
:	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
:	Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec()),
	_target(copy.getTarget())
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &op)
{
	(void)op;
	return (*this);
}

/*
** Getter
*/

std::string	PresidentialPardonForm::getTarget() const {return (_target);}

/*
** Other
*/

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	check(executor);

	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}