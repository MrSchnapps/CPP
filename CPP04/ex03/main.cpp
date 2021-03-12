/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 00:10:36 by judecuyp          #+#    #+#             */
/*   Updated: 2021/02/18 15:54:23 by judecuyp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	std::cout << "========================PDF TEST=================================" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	std::cout << "========================DEEP COPY TEST=================================" << std::endl;
	{
		MateriaSource srcs;
		srcs.learnMateria(new Ice());
		srcs.learnMateria(new Cure());
		{
			MateriaSource src1 = srcs;
		}
		MateriaSource src2 = srcs;

		MateriaSource src3;
		src3.learnMateria(new Ice());
		src3.learnMateria(new Cure());

		src2 = src3;
	}
	{
		Character ted("Ted");
		MateriaSource srcss;
		srcss.learnMateria(new Ice());
		srcss.learnMateria(new Cure());

		ted.equip(srcss.createMateria("ice"));
		ted.equip(srcss.createMateria("cure"));

		Character ted2 = ted;

		ted2.use(0, ted);
		
		Character ted3 ("Ted3");
		ted3.equip(srcss.createMateria("ice"));
		ted3.equip(srcss.createMateria("cure"));

		ted2 = ted3;
		ted2.use(1, ted);
	}
	std::cout << "===> Deep copy OK <===" << std::endl;
	std::cout << "======================== FUNCTIONNAL =================================" << std::endl;
	Character larry("Larry");
	MateriaSource source;

	Ice *mat1 = new Ice();
	Cure *mat2 = new Cure();
	Ice *mat3 = new Ice();
	Ice *mat4 = new Ice();
	Ice *mat5 = new Ice();

	std::cout << "Materia learned ==> " << source.getSizeList() << std::endl;
	source.learnMateria(mat1);
	std::cout << "Materia learned ==> " << source.getSizeList() << std::endl;
	source.learnMateria(mat2);
	std::cout << "Materia learned ==> " << source.getSizeList() << std::endl;
	source.learnMateria(mat3);
	std::cout << "Materia learned ==> " << source.getSizeList() << std::endl;
	source.learnMateria(mat4);
	std::cout << "Materia learned ==> " << source.getSizeList() << std::endl;
	source.learnMateria(mat5);
	std::cout << "Materia learned ==> " << source.getSizeList() << std::endl;
	
	std::cout << std::endl;

	AMateria *eq1 = source.createMateria("ice");
	AMateria *eq2 = source.createMateria("cure");
	AMateria *eq3 = source.createMateria("cure");
	AMateria *eq4 = source.createMateria("cure");
	AMateria *eq5 = source.createMateria("cure");
	
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;
	larry.equip(eq1);
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;
	larry.equip(source.createMateria("42"));
	std::cout << "unexistent Materia ==> " << larry.getMateriaEquiped() << std::endl;
	larry.equip(eq2);
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;
	larry.equip(eq3);
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;
	larry.equip(eq4);
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;
	larry.equip(eq5);
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;

	std::cout << std::endl;
	larry.unequip(3);
	std::cout << "Materia inventory ==> " << larry.getMateriaEquiped() << std::endl;
	delete(eq4);
	delete mat5;
	delete eq5;
	return 0;
}