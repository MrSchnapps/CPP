/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:26:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:26:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <fstream>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &op);

		std::string	getTarget() const;

		void		execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm();

		class OpenFileFailedException : public std::exception
		{
			const char *what() const throw();
		};
		
		std::string	_target;
};
#endif