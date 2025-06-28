/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:02:07 by vcaratti          #+#    #+#             */
/*   Updated: 2025/05/01 14:12:13 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
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
	tmp = src->createMateria("ice");
	if ( !src->createMateria("air") )
		std::cout<< "invalid type!\n";
	
	bob->equip(tmp);
	bob->use(0, *me);
	bob->unequip(0);
	delete tmp; //must be done manually

	ICharacter*	bob_copy = new Character( ( Character& ) *bob);
	bob_copy->equip(src->createMateria("ice"));
	bob_copy->use(0, *me);
	bob->equip(src->createMateria("cure"));
	bob->use(0, *bob_copy);
	
	delete bob_copy;
	delete bob;
	delete me;
	delete src;


	return 0;
}
