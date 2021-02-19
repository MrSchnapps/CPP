/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:11 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 13:46:42 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat jerry("Jerry", 30);
	try 
	{
		Form form1("F1", 151, 40);
	}
	catch (std::exception &e)
	{
		e.what();
	}
	try 
	{
		Form form1("F1", 0, 40);
	}
	catch (std::exception &e)
	{
		e.what();
	}
	try 
	{
		Form form1("F1", 40, 151);
	}
	catch (std::exception &e)
	{
		e.what();
	}
	try 
	{
		Form form1("F1", 40, 0);
	}
	catch (std::exception &e)
	{
		e.what();
	}
	Form form1("F1", 40, 40);
	Form form2("F2", 10, 10);
	jerry.signForm(form1);
	jerry.signForm(form1);
	jerry.signForm(form2);
	try
	{
		form2.beSigned(jerry);
	}
	catch (std::exception &e)
	{
		e.what();
	}
	return (0);
}