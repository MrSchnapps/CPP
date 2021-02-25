/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 23:43:49 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/24 15:17:18 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
** Constructor - Destructor - Copy
*/

Convert::Convert()
:	_isInf(false),
	_isNan(false),
	_input("")
{}

Convert::Convert(Convert &copy)
:	_isInf(copy.getIsInf()),
	_isNan(copy.getIsNan()),
	_input(copy.getInput())
{}

Convert::~Convert() {}

Convert &Convert::operator=(Convert &op)
{
	if (this == &op)
		return (*this);
	_isInf = op.getIsInf();
	_isNan = op.getIsNan();
	_input = op.getInput();
	return (*this);
}

/*
** Getters - Setters
*/

bool		Convert::getIsInf(void) const {return (_isInf);}
bool		Convert::getIsNan(void) const {return (_isNan);}
std::string	Convert::getInput(void) const {return (_input);}

void		Convert::setInput(char* const input)
{
	_input = input;
	if (_input[_input.length() - 1] == 'f' && (_input.compare("+inf") && _input.compare("-inf")))
		_input.pop_back();
}

/*
** Conversions
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

	if ((to_convert < FLT_MIN || to_convert > FLT_MAX) && to_convert != 0)
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	else if (_isInf)
		nb = std::numeric_limits<float>::infinity();
	else if (_isNan)
		nb = std::numeric_limits<float>::quiet_NaN();
	else
	{
		nb = static_cast<float>(to_convert);
		if (nb - static_cast<int>(nb) != (float)0)
			std::cout << "float : " << nb << "f" << std::endl;
		else
			std::cout << "float : " << nb << ".0f" << std::endl;
		return ;
	}
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
	{
		nb = static_cast<double>(to_convert);
		if (nb - static_cast<int>(nb) != (double)0)
			std::cout << "double : " << nb << std::endl;
		else
			std::cout << "double : " << nb << ".0" << std::endl;
		return ;
	}
	std::cout << "double : " << nb << std::endl;
}

/*
** Parsing
*/

bool		Convert::is_num()
{
	size_t	i = 0;
	int		dot = 0;

	if (_input.length() > 1 && (_input[0] == '-' || _input[1] == '+'))
		i += 1;
	while (i < _input.length())
	{
		if (!std::isdigit(_input[i]))
		{
			if (_input[i] == '.' && !dot)
				dot += 1;
			else
				return (false);
		}
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
	if (_input.length() == 3 && _input[0] == '\''
							&& _input[2] == '\'')
	{
		if (!std::isprint(_input[1]))
			return (false);
		else
			to_convert = static_cast<double>(_input[1]);
		return (true);
	}
	else
	{
		if (!is_num())
			return (false);
		std::stringstream ss(_input);
		ss >> to_convert;
		if (to_convert < -DBL_MAX || to_convert > DBL_MAX)
			return (false);
	}
	return (true);
}
