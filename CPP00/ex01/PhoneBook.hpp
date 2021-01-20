/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:04:43 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/20 16:22:48 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PHONEBOOK_HPP)
#define PHONEBOOK_HPP

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
		void 	choice();

	private:
		Contact list[8];
		int     amount;
};

#endif