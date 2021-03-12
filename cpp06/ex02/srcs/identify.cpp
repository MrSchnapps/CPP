/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:04:29 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 15:34:01 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;	
}

Base*	generate(void)
{
	int r = rand()%3;

	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

