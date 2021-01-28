/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:04:38 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/21 10:25:34 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void 				setInfo(const std::string str, int i);
		void				setIndex(int id);
		const std::string	getField(int i);
		void				print_index();
		void				display();

	private:
		int         index;
		std::string	fields[11];
		std::string infos[11];
};

#endif