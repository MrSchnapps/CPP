/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 13:17:34 by judecuyp          #+#    #+#             */
/*   Updated: 2021/01/28 20:03:19 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    memoryLeak()
{
    std::string *panthere = new std::string("String panthere");
    
    std::cout << *panthere << std::endl;

    delete panthere;
}
