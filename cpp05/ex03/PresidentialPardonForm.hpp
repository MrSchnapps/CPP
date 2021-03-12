/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:26:14 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 17:51:16 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDON_HPP__
# define __PRESIDENTIALPARDON_HPP__

# include "Form.hpp"

class PresidentialPardonForm;

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();

		std::string _target;

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm &op);

		std::string	getTarget() const;

		void		execute(Bureaucrat const & executor) const;
};

#endif