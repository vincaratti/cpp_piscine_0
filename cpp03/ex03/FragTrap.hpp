/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:11:38 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/24 11:19:17 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#pragma once

#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

class FragTrap : virtual public ClapTrap
{
public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap& other );
	virtual	~FragTrap( void );
	FragTrap&	operator=( const FragTrap& other );
	void	highFivesGuys( void );
};

#endif
