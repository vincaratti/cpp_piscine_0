
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:01:46 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 12:54:03 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
/*	
	Animal* animals[100];
	for ( int i = 0; i < 100; i++ )
	{
		if ( i % 2 )
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for ( int i = 0; i < 100; i++ )
	{
		delete animals[i];
	}*/
	Animal *nez = new Animal();
	delete nez;
	Dog *tocopy = new Dog();
	Dog *copy = new Dog( *tocopy );
	std::cout << "================\n";
	delete tocopy;
	delete copy;
	return 0;
}
