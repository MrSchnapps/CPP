/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:24:26 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 20:40:33 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <cctype>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern;

class Intern
{
	private:
		typedef struct	s_formulary
		{
			std::string	t_name;
			Form * (*func)(std::string const &target);
		} 				t_formulary;

		

	public :
		Intern();
		Intern(Intern &copy);
		~Intern();
		Intern &operator=(Intern &op);

		Form*	makeForm(std::string const &name, std::string const &target);
};

Form*	getShrubbery(std::string const &target);
Form*	getRobot(std::string const &target);
Form*	getPresident(std::string const &target);
#endif