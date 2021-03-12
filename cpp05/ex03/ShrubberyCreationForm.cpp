/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:26:22 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:34:13 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** Constructor - Destructor - Copy
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
:	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy)
:	Form(copy.getName(), copy.getGradeSign(), copy.getGradeExec()),
	_target(copy.getTarget())
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &op)
{
	(void)op;
	return (*this);
}

/*
** Getter
*/

std::string	ShrubberyCreationForm::getTarget() const {return (_target);}

/*
** Other
*/

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	check(executor);
	std::string filename = executor.getName() + "_shrubbery";
	std::ofstream file(filename);
	if (!file)
		throw ShrubberyCreationForm::OpenFileFailedException();
	file << "     /^^\\" << std::endl;
	file << "    { *  }" << std::endl;
	file << "   {  '   }" << std::endl;
	file << "  {  '  *^ }" << std::endl;
	file << " {   |    ^ }" << std::endl;
	file << " {  *  ^    }" << std::endl;
	file << "  {   ^ '  }" << std::endl;
	file << "   {      }" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file << "     |  |" << std::endl;
	file.close();
}

const char	*ShrubberyCreationForm::OpenFileFailedException::what() const throw()
{
	std::cout << "The form is already signed." << std::endl;
	return (0);
}

