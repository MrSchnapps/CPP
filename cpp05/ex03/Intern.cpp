/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:24:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 20:50:31 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(Intern &copy) {(void)copy;}
Intern::~Intern() {}
Intern &Intern::operator=(Intern &op) {(void)op; return (*this);}

Form*	getShrubbery(std::string const &target) {return (new ShrubberyCreationForm(target));}
Form*	getRobot(std::string const &target) {return (new RobotomyRequestForm(target));}
Form*	getPresident(std::string const &target) {return (new PresidentialPardonForm(target));}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	t_formulary list[12] = {
		{"shrubbery creation", &getShrubbery},
		{"shrubbery creation form", &getShrubbery},
		{"shrubberycreation", &getShrubbery},
		{"shrubberycreationform", &getShrubbery},
		{"robotomy request", &getRobot},
		{"robotomy request form", &getRobot},
		{"robotomyrequest", &getRobot},
		{"robotomyrequestform", &getRobot},
		{"presidential pardon", &getPresident},
		{"presidential pardon form", &getPresident},
		{"presidentialpardon", &getPresident},
		{"presidentialpardonform", &getPresident}
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
