/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:55:49 by vcaratti          #+#    #+#             */
/*   Updated: 2025/04/28 12:50:08 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <algorithm>
#include <iterator>

class Brain
{
public:
		Brain( void );
		Brain( const Brain& other );
	virtual	~Brain( void );
	Brain&	operator=( const Brain& other );
private:
	std::string	ideas[100];
};

#endif
