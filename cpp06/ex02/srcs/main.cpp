/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:57:14 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/23 15:33:59 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main()
{
	srand(time(NULL));
	
	Base *b = generate();

	std::cout << "Pointer : " << std::endl;
	identify_from_pointer(b);
	std::cout << "Reference : " << std::endl;
	identify_from_reference(*b);

	delete b;
}