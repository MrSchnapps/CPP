/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:11 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/19 00:51:12 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat terry("Terry", 160);
	P(terry);
	P("");

	Bureaucrat larry("Larry", 0);
	P(larry);
	P("");

	Bureaucrat jerry("Jerry", 150);
	P(jerry);
	jerry.downGrade();
	P(jerry);
	jerry.upGrade();
	P(jerry);
	P("");

	Bureaucrat henry("Henry", 1);
	P(henry);
	henry.upGrade();
	P(henry);
	henry.downGrade();
	P(henry);

	return (0);
}