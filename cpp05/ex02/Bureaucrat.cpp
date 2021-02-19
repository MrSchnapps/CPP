/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:17 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:29:07 by judecuyp         ###   ########.fr       */
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

void			Bureaucrat::signForm(Form &form) const
{
	if (form.getSigned() == 1)
		std::cout << _name << " cannot sign "<< form.getName() << " because the form is already signed." << std::endl;
	else if (form.getGradeSign() < _grade)
		std::cout << _name << " cannot sign "<< form.getName() << " because his grade is too low." << std::endl;
	else
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}

	
}

void		Bureaucrat::executeForm(Form const & form) const
{

		
	if (form.getGradeExec() < _grade)
		std::cout << _name << " didn't execute " << form.getName() << " because his grade is too low." << std::endl;
	else if (!form.getSigned())
		std::cout << _name << " didn't execute " << form.getName() << " because the is not signed." << std::endl;
	else 
	{
		std::cout << _name << " execute " << form.getName() << std::endl;
		form.execute(*this);
	}
	
}

/*
** Exceptions
*/

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
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

/*
** Operators
*/

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}