/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:17 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 00:48:37 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** Constructor - Destructor - Copy
*/

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
:	_name(name),
	_grade(150)
{
	handleGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
:	_name(copy.getName()),
	_grade(copy.getGrade())
{}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &op)
{
	if (this == &op)
		return (*this);
	_grade = op.getGrade();
	return (*this);
}

/*
** Getter
*/

std::string		Bureaucrat::getName() const {return (_name);}

unsigned int	Bureaucrat::getGrade() const {return (_grade);}

/*
** Other
*/

void			Bureaucrat::upGrade()
{
	unsigned int test = _grade - 1;
	handleGrade(test);
}

void			Bureaucrat::downGrade()
{
	unsigned int test = _grade + 1;
	handleGrade(test);
}


void 			Bureaucrat::handleGrade(unsigned int grade)
{
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		_grade = grade;
	}
	catch (std::exception &e)
	{
		e.what();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Grade is too low." << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Grade is too high." << std::endl;
	}	
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}