/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:05:58 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/12 13:38:57 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack() {}
		MutantStack(MutantStack &copy) : std::stack<T>(copy) {}
		virtual ~MutantStack() {}
		MutantStack &operator=(MutantStack &op)
		{
			if (this == &op)
				return (*this);
			this->c = op.c;
			return (*this);
		}

		iterator 				begin() {return (std::stack<T>::c.begin());}
		const_iterator 			begin() const {return (std::stack<T>::c.begin());}
		iterator				end() {return(std::stack<T>::c.end());}
		const_iterator			end() const {return(std::stack<T>::c.end());}

		reverse_iterator 		rbegin() {return (std::stack<T>::c.rbegin());}
		const_reverse_iterator 	rbegin() const {return (std::stack<T>::c.rbegin());}
		reverse_iterator		rend() {return(std::stack<T>::c.rend());}
		const_reverse_iterator	rend() const {return(std::stack<T>::c.rend());}
};

#endif