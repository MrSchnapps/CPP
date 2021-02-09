/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:05:29 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/04 18:06:53 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap sacha("Sacha Du Bourg Palette");
	FragTrap regis("Regis Le Rival");

	sacha.takeDamage(regis.meleeAttack(sacha.getName()));
	std::cout << std::endl;
	regis.takeDamage(sacha.rangedAttack(regis.getName()));
	
	std::cout << std::endl;
	
	sacha.beRepaired(70);
	regis.beRepaired(100);

	std::cout << "==========================================================================" << std::endl;

	sacha.takeDamage(regis.meleeAttack(sacha.getName()));
	sacha.takeDamage(regis.meleeAttack(sacha.getName()));
	sacha.takeDamage(regis.meleeAttack(sacha.getName()));
	sacha.takeDamage(regis.rangedAttack(sacha.getName()));
	sacha.takeDamage(regis.rangedAttack(sacha.getName()));
	std::cout << std::endl;
	regis.takeDamage(sacha.rangedAttack(regis.getName()));
	sacha.print_infos();

	sacha.beRepaired(100);
	regis.beRepaired(100);

	std::cout << "==========================================================================" << std::endl;

	regis.takeDamage(sacha.vaulthunter_dot_exe(regis.getName()));
	std::cout << std::endl;
	regis.takeDamage(sacha.vaulthunter_dot_exe(regis.getName()));
	std::cout << std::endl;
	regis.takeDamage(sacha.vaulthunter_dot_exe(regis.getName()));
	std::cout << std::endl;
	regis.takeDamage(sacha.vaulthunter_dot_exe(regis.getName()));
	std::cout << std::endl;
	regis.takeDamage(sacha.vaulthunter_dot_exe(regis.getName()));

	sacha.print_infos();
	regis.beRepaired(100);
	regis.takeDamage(sacha.meleeAttack(regis.getName()));
	sacha.print_infos();
	std::cout << std::endl;

	return (0);
}