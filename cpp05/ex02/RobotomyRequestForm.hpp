/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:26:19 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:48:28 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm;

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

		std::string _target;

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm &op);

		std::string	getTarget() const;

		void		execute(Bureaucrat const & executor) const;
};

#endif
