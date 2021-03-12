/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:04:43 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/21 10:25:29 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <limits>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	setContact();
		void	print_command();
		void	print_list();

	private:
		Contact list[8];
		int     amount;

		void 	choice();
};

#endif