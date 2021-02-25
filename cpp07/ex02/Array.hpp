/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:03:31 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/25 19:10:05 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <exception>
# include <string>

template<class T>
class Array
{
	public:
	/*
	** Constructor - Destructor - Copy
	*/
		Array()
		:	_array(NULL), _size(0) 
		{}

		Array(unsigned int n)
		:	_array(NULL), _size(n)
		{
			_array = new T[_size];
		}

		Array(Array &copy)
		: _array(new T[copy.size()]), _size(copy.size())
		{
			for (unsigned int i = 0; i < copy.size(); i++)
				_array[i] = copy._array[i];
		}
	
		~Array()
		{
			if (_size > 0)
				delete [] _array;
		}
		
		Array &operator=(Array &op)
		{
			if (_size > 0)
				delete [] _array;
			_array = new T[op.size()];
			_size = op.size();
			for (unsigned int i = 0; i < op.size(); i++)
				_array[i] = op._array[i];
			return (*this);
		}
	/*
	** Other
	*/
		unsigned int	size() const {return (_size);}

		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw outOfLimitsException();
			return (_array[i]);
		}

		T const &operator[](unsigned int i) const 
		{
			return (operator[](i));
		}

		class outOfLimitsException : public std::exception
		{
			const char *what() const throw() {return("Index out of limits.");}
		};

	private:
		T				*_array;
		unsigned int	_size;
};
#endif