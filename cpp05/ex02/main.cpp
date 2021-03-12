/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:11 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 18:09:35 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::srand(std::time(NULL));
	std::cout << "======================= Shrubbery =====================" << std::endl;
	try
	{
		Bureaucrat jerry("Jerry", 136);
		Form *shru = new ShrubberyCreationForm("Home");

		jerry.signForm(*shru);
		jerry.executeForm(*shru);
		for (int i = 0; i < 11; i++)
			jerry.downGrade();
		jerry.executeForm(*shru);
		delete shru;
	}
	catch (std::exception &e)
	{
		e.what();
	}
	std::cout << std::endl;
	std::cout << "======================= Robotomy =====================" << std::endl;
	try
	{
		Bureaucrat tommy("tommy", 44);
		Form *rob = new RobotomyRequestForm("Vixy");

		tommy.signForm(*rob);
		rob->execute(tommy);
		for (int i = 0; i < 11; i++)
			tommy.downGrade();
		tommy.executeForm(*rob);
		delete rob;
	}
	catch (std::exception &e)
	{
		e.what();
	}
	std::cout << std::endl;
	std::cout << "======================= Presidential =====================" << std::endl;
	try
	{
		Bureaucrat donnald("Donnald", 4);
		Form *pres = new PresidentialPardonForm("Obama");

		donnald.signForm(*pres);
		pres->execute(donnald);
		for (int i = 0; i < 11; i++)
			donnald.downGrade();
		donnald.executeForm(*pres);
		delete pres;
	}
	catch (std::exception &e)
	{
		e.what();
	}
	return (0);
}