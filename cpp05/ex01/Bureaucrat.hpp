/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:14 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 13:20:05 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

# define P(x) std::cout << x << std::endl;

class Form;
class Bureaucrat;

class Bureaucrat
{
	public :
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat &op);

		std::string		getName() const;
		unsigned int	getGrade() const;	

		void			upGrade();
		void			downGrade();	

		class GradeTooHighException :  public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		
		void 			handleGrade(unsigned int grade);
		void			signForm(Form &form) const;

	private :
		Bureaucrat();
		
		
		std::string const	_name;
		unsigned int		_grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b);
#endif