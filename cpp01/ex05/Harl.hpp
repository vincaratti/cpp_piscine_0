/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:15:01 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/26 21:33:39 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_H__
#define __HARL_H__

#include <string>
#include <iostream>

class Harl
{
public:
		Harl( void );
		Harl( const Harl& harl );
		~Harl( void );
	void	complain( std::string level );
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	void	(Harl::*function_p)( void );
	enum	string_code
		{
		eDEBUG,
		eINFO,
		eWARNING,
		eERROR,
		eELSE
		};
	string_code get_code( const std::string str );
};

#endif
