/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 23:09:12 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/11 21:59:32 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>

class Span
{
	public:
		Span(unsigned int const &size);
		Span(const Span &copy);
		~Span();
		Span &operator=(Span &op);

		unsigned int		getSize() const;
		std::vector<int>	getStock() const;

		void			addNumber(int nb);
		long			shortestSpan();
		long			longestSpan();
		void			addMostNumbers(int min, int max);

		class StockFullException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class NoSpanException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		Span();

		std::vector<int>	_stock;
		unsigned int		_size;
};

#endif