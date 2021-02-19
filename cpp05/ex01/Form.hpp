/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:08:40 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 14:20:59 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class Form
{
	public:
		Form(std::string const &name, unsigned int grade_sign, unsigned int grade_exec);
		Form(const Form &copy);
		virtual ~Form();
		Form &operator=(Form &op);

		std::string	const	getName() const;
		bool				getSigned() const;
		unsigned int 		getGradeSign() const;
		unsigned int 		getGradeExec() const;

		void				beSigned(const Bureaucrat &b);

	private:
		Form();

		class GradeTooHighException :  public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		
		std::string const			_name;
		bool						_signed;
		unsigned int const			_grade_sign;
		unsigned int const			_grade_exec;

};

std::ostream	&operator<<(std::ostream &out, const Form &f);

#endif