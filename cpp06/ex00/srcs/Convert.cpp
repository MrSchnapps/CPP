/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:43:49 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 01:58:33 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** Constructor - Destructor - Copy
*/

Convert::Convert()
:	_isInf(false),
	_isNan(false)
{}

Convert::Convert(Convert &copy)
:	_isInf(copy.getIsInf()),
	_isNan(copy.getIsNan()),
	_char_nb(copy.getCharNb()),
	_int_nb(copy.getIntNb()),
	_float_nb(copy.getFloatNb()),
	_double_nb(copy.getDoubleNb())
{}

Convert::~Convert() {}

Convert &Convert::operator=(Convert &op)
{
	if (this == &op)
		return (*this);
	_isInf = op.getIsInf();
	_isNan = op.getIsNan();
	_char_nb = op.getCharNb();
	_int_nb = op.getIntNb();
	_float_nb = op.getFloatNb();
	_double_nb = op.getDoubleNb();
	return (*this);
}

/*
** Getters - Setters
*/

bool		Convert::getIsInf(void) const {return (_isInf);}
bool		Convert::getIsNan(void) const {return (_isNan);}
char		Convert::getCharNb(void) const {return (_char_nb);}
int			Convert::getIntNb(void) const {return (_int_nb);}
float		Convert::getFloatNb(void) const {return (_float_nb);}
double		Convert::getDoubleNb(void) const {return (_double_nb);}
std::string	Convert::getInput(void) const {return (_input);}

void		Convert::setInput(char* const input)
{
	_input = input;
	if (_input[_input.length() - 1] == 'f' && (!_input.compare("+inf") && !_input.compare("-inf")))
		_input.pop_back();
}

/*
** Others
*/

void		Convert::toChar(double const &to_convert)
{
	char nb = static_cast<char>(to_convert);

	if (_isNan || _isInf || to_convert > CHAR_MAX || to_convert < CHAR_MIN)
		std::cout << "Impossible" << std::endl;
	else if (!std::isprint(nb))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : \'" << nb << "\'" << std::endl;
}

void		Convert::toInt(double &to_convert)
{
	int nb = static_cast<int>(to_convert);

	if (_isNan || _isInf || to_convert > INT_MAX || to_convert < INT_MIN)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << "int : \'" << nb << "\'" << std::endl;
}

void		Convert::toFloat(double &to_convert)
{
	float nb;

	if (_isInf)
		nb = std::numeric_limits<float>::infinity();
	else if (_isNan)
		nb = std::numeric_limits<float>::quiet_NaN();
	else
		nb = static_cast<float>(to_convert);
	std::cout << "float : " << nb << "f" << std::endl;
}

void		Convert::toDouble(double &to_convert)
{
	double nb;

	if (_isInf)
		nb = std::numeric_limits<double>::infinity();
	else if (_isNan)
		nb = std::numeric_limits<double>::quiet_NaN();
	else
		nb = static_cast<double>(to_convert);
	std::cout << "double : " << nb << std::endl;
}

bool		Convert::is_num()
{
	size_t	i = 0;
	int		dot = 0;

	if (_input[0] == '-' || _input[1] == '+')
		i += 1;
	while (i < _input.length())
	{
		if (_input[i] == '.' && dot >= 1)
			return (false);
		else
			dot += 1;
		if (!std::isdigit(_input[i]) && _input[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

bool		Convert::parsing(long double &to_convert)
{	
	if (!_input.compare("+inf") || !_input.compare("-inf"))
	{
		_isInf = true;
		return (true);
	}
	else if (!_input.compare("nan"))
	{
		_isNan = true;
		return (true);
	}
	if (_input.length() == 1)
	{
		if (!std::isprint(_input[0]))
			return (false);
		if (std::isdigit(_input[0]))
			to_convert = static_cast<double>(_input[0] - '0');
		else
			to_convert = static_cast<double>(_input[0]);
		return (true);
	}
	else
	{
		if (is_num())
		{
			std::stringstream ss(_input);
			ss >> to_convert;
			if (to_convert < -DBL_MAX || to_convert > DBL_MAX)
				return (false);
		}
	}
	return (true);
}


