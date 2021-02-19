/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:11 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 23:43:51 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::srand(std::time(NULL));
	std::cout << "======================= Main =====================" << std::endl;
	{
		Intern  someRandomIntern;
		
		Form*	rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	std::cout << std::endl;
	
	std::cout << "======================= Shrubbery =====================" << std::endl;
	Form *rrf2;
	try
	{
		Intern  someRandomIntern;
		Bureaucrat ted("Ted", 10);

		

		rrf2 = someRandomIntern.makeForm("shrubbery creation", "home");
		if (rrf2)
		{
			rrf2->beSigned(ted);
			rrf2->execute(ted);
		}
		delete rrf2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete rrf2;
	}
	std::cout << std::endl;
	
	std::cout << "======================= Robotomy =====================" << std::endl;
	Form *rrf3;
	try
	{
		Intern  someRandomIntern;
		Bureaucrat ted("Ted", 10);

		rrf3 = someRandomIntern.makeForm("robotomy request form", "a student");
		if (rrf3)
			rrf3->execute(ted);
		delete rrf3;
		
	}
	catch (std::exception &e)
	{
		e.what();
		delete rrf3;
	}
	std::cout << std::endl;
	
	std::cout << "======================= Presidential =====================" << std::endl;
	Form *rrf4;
	try
	{
		Intern  someRandomIntern;
		Bureaucrat ted("Ted", 10);

		rrf4 = someRandomIntern.makeForm("presidential pardon", "Obama");
		if (rrf4)
			rrf4->execute(ted);
		delete rrf4;
		
	}
	catch (std::exception &e)
	{
		e.what();
		delete rrf4;
	}

	std::cout << "======================= Unkown =====================" << std::endl;
	Form *rrf5;
	try
	{
		Intern  someRandomIntern;
		Bureaucrat ted("Ted", 10);

		Form *rrf5;

		rrf5 = someRandomIntern.makeForm("Bruxelles Formation allocs", "argeeent");
		if (rrf5)
			rrf5->execute(ted);
		delete rrf5;
	}
	catch (std::exception &e)
	{
		e.what();
		delete rrf5;
	}
	return (0);
}