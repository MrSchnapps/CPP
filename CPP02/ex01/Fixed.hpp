/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:37:42 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/03 00:37:53 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed;

class Fixed
{
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &op);

		//getter - setter
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		//Other
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &op, const Fixed &fx);

#endif