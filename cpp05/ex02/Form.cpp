/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:08:43 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:25:55 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** Constructor - Destructor - Copy
*/

Form::Form() : _name(""), _signed(false), _grade_sign(150), _grade_exec(150) {}

Form::Form(std::string const &name, unsigned int grade_sign, unsigned int grade_exec)
:	_name(name),
	_signed(false),
	_grade_sign(grade_sign),
	_grade_exec(grade_exec)
{
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy)
:	_name(copy.getName()),
	_signed(copy.getSigned()),
	_grade_sign(copy.getGradeSign()),
	_grade_exec(copy.getGradeExec())
{
	if (_grade_sign < 1 || _grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form &Form::operator=(Form &op)
{
	if (this == &op)
		return (*this);
	_signed = op.getSigned();
	return (*this);
}

/*
** Getters
*/

std::string	const	Form::getName() const {return (_name);}

bool				Form::getSigned() const {return (_signed);}

unsigned int 		Form::getGradeSign() const {return (_grade_sign);}

unsigned int 		Form::getGradeExec() const {return (_grade_exec);}

/*
** Exception
*/

const char 			*Form::GradeTooHighException::what() const throw()
{
	std::cout << "Grade is too high." << std::endl;
	return (0);
}

const char 			*Form::GradeTooLowException::what() const throw()
{
	std::cout << "Grade is too low." << std::endl;
	return (0);
}

const char 			*Form::NoSignedException::what() const throw()
{
	std::cout << "The form is not signed." << std::endl;
	return (0);
}

const char 			*Form::AlreadySignedException::what() const throw()
{
	std::cout << "The form is already signed." << std::endl;
	return (0);
}

/*
** Others
*/

void 				Form::beSigned(const Bureaucrat &b)
{
	if (_signed)
		throw Form::AlreadySignedException();
	else if (b.getGrade() > _grade_sign)
		throw Form::GradeTooLowException();
	else if (b.getGrade() <= _grade_sign)
		_signed = true;	
}

void					Form::check(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _grade_exec)
		throw Form::GradeTooLowException();
	if	(!_signed)
		throw Form::NoSignedException();
}

/*
** Operator
*/

std::ostream		&operator<<(std::ostream &out, const Form &f)
{
	std::string sign;

	if (!f.getSigned())
		sign =  "no";
	else
		sign = "yes";
	
	out << "Form " << f.getName() << ", grade to sign : " << f.getGradeSign() << ", grade to execute : " << f.getGradeExec() << ", signed : " << sign << std::endl;
	return (out);
}