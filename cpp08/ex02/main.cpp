/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:06:35 by judecuyp          #+#    #+#             */
/*   Updated: 2021/03/12 15:19:04 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	std::cout << "===== Basic main tests =====" << std::endl;
	 
	MutantStack<int>    mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(19);
	mstack.push(42);

	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while(it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		
		
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
	std::cout << "stack test" << std::endl;
	std::cout << s.top() << std::endl;

	std::cout << "===== My tests =====" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "const" << std::endl;
		MutantStack<int>::const_iterator it = mstack.begin();
		MutantStack<int>::const_iterator ite = mstack.end();

		++it;
		--it;

		--ite;
		++ite;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	
	{
		std::cout << std::endl;
		std::cout << "reverse" << std::endl;
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;

		--ite;
		++ite;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << std::endl;
		std::cout << "const reverse" << std::endl;
		MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator ite = mstack.rend();

		++it;
		--it;

		--ite;
		++ite;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << std::endl;
	while (!mstack.empty())
	{
		std::cout << "Last : " << mstack.top() << std::endl;
		mstack.pop();
	}
	return (0);
}
