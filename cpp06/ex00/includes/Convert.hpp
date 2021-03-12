/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:37:33 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 11:53:00 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
# define __CONVERT_HPP__

# include <iostream>
# include <string>
# include <sstream>
# include <cfloat>
# include <climits>
# include <limits>

class Convert;

class Convert
{
	public :
		Convert();
		Convert(Convert &copy);
		~Convert();
		Convert &operator=(Convert &op);

		bool		getIsInf(void) const;
		bool		getIsNan(void) const;
		std::string	getInput(void) const;

		void		setInput(char* const input);

		bool		parsing(long double &to_convert);
		void		toChar(double const &to_convert);
		void		toInt(double &to_convert);
		void		toFloat(double &to_convert);
		void		toDouble(double &to_convert);
			
	private :
		bool		_isInf;
		bool		_isNan;
		std::string	_input;

		bool		is_num();
};

#endif