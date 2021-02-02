/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:37:24 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/03 00:47:02 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Constructors
*/

Fixed::Fixed() 
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = value << this->_fractional_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = roundf(value * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_value = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &op)
{
	std::cout << "Assignation operator called " << std::endl;
	if (this == &op)
		return (*this);
	this->_fixed_point_value = op.getRawBits();
	return (*this);
}

/*
** getter - setter
*/

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}

/*
** Other
*/

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_point_value / (float)(1 << this->_fractional_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fixed_point_value >> this->_fractional_bits);
}

std::ostream &operator<<(std::ostream &op, const Fixed &fx)
{
	op << fx.toFloat();
	return (op);
}