/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:24:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/21 11:19:45 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(Intern &copy) {(void)copy;}
Intern::~Intern() {}
Intern &Intern::operator=(Intern &op)
{
	if (this == &op)
		return (*this);
	return (*this);
}

Form*	Intern::createShrubbery(std::string const &target) {return (new ShrubberyCreationForm(target));}
Form*	Intern::createRobot(std::string const &target) {return (new RobotomyRequestForm(target));}
Form*	Intern::createPresident(std::string const &target) {return (new PresidentialPardonForm(target));}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	t_formulary list[12] = {
		{"shrubbery creation", &createShrubbery},
		{"shrubbery creation form", &createShrubbery},
		{"shrubberycreation", &createShrubbery},
		{"shrubberycreationform", &createShrubbery},
		{"robotomy request", &createRobot},
		{"robotomy request form", &createRobot},
		{"robotomyrequest", &createRobot},
		{"robotomyrequestform", &createRobot},
		{"presidential pardon", &createPresident},
		{"presidential pardon form", &createPresident},
		{"presidentialpardon", &createPresident},
		{"presidentialpardonform", &createPresident}
	};
	
	for (int i = 0; i < 12; i++)
		if (name == list[i].t_name)
		{
			std::cout << "Intern create " << list[i].t_name << std::endl;
			return (list[i].func(target));
		}
	std::cout << "The form that you try to create is not known." << std::endl;
	return (NULL);
}
