/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:17 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 13:51:09 by judecuyp         ###   ########.fr       */
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
	_grade(150)
{
	handleGrade(copy.getGrade());
}

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

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	std::cout << "Grade is too high (max 1)." << std::endl;
	return (0);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	std::cout << "Grade is too low (min 150)." << std::endl;
	return (0);
}

void 			Bureaucrat::handleGrade(unsigned int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}