/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:26:25 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 20:34:10 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string*	str_p = &str;
	std::string&	str_r = str;

	std::cout <<	"str address: \t\t" << &str << std::endl <<
			"address in str_p:\t" << str_p << std::endl <<
			"address in str_r:\t" << &str_r << std::endl;
	std::cout <<	"str value: \t\t" << str << std::endl <<
			"value in str_p:\t\t" << *str_p << std::endl <<
			"value in str_r:\t\t" << str_r << std::endl;
}
