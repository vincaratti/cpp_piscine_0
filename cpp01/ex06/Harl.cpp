/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:17:45 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/26 22:21:01 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){}

Harl::Harl( const Harl& harl ){(void)harl;}

Harl::~Harl( void ){}

void	Harl::complain( std::string level )
{
	//void	Harl::function_p;
	switch (get_code(level))
	{
		case (eDEBUG):
			(this->function_p) = &Harl::debug;
			break ;
		case eINFO:
			function_p = &Harl::info;
			break ;
		case (eWARNING):
			function_p = &Harl::warning;
			break ;
		case (eERROR):
			function_p = &Harl::error;
			break ;
		default:
			function_p = NULL;
			std::cout << 	"[ Probably complaining about insignificant problems ]" <<
					std::endl;
			return ;
	}
	(this->*function_p)();
	return ;
}

void	Harl::debug( void )
{
	std::cout << "[  DEBUG  ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
	info();
}

void	Harl::info( void )
{
	std::cout << "[  INFO  ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
	warning();
}

void	Harl::warning( void )
{
	std::cout << "[  WARNING  ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	error();
}

void	Harl::error( void )
{
	std::cout << "[  ERROR  ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

Harl::string_code	Harl::get_code( const std::string str )
{
	if (str == "DEBUG") return (eDEBUG);
	if (str == "INFO") return (eINFO);
	if (str == "WARNING") return (eWARNING);
	if (str == "ERROR") return (eERROR);
	return (eELSE);
}
