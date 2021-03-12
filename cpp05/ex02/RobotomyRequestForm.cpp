/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:26:17 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:48:16 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** Constructor - Destructor - Copy
*/

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
:	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
:	Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec()),
	_target(copy.getTarget())
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &op)
{
	(void)op;
	return (*this);
}

/*
** Getter
*/

std::string	RobotomyRequestForm::getTarget() const {return (_target);}

/*
** Other
*/

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	check(executor);

	std::cout << "PFFFFFFFFFFFFFFFFFFFFF ... VRRRRRRRRRRRRRRRRRRRRRR ... VRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	int luck = rand()%2;
	if (luck)
		std::cout << _target << " has been obotomized successfully." << std::endl;
	else
		std::cout << "Its a failure. The robotomization has failed." << std::endl;
}
