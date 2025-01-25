/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:25:32 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/24 23:09:42 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->active = 0;
}

Contact::~Contact(){}

Contact::Contact(const Contact &contact)
{
	this->active = contact.active;
	this->FirstName=contact.FirstName;
	this->LastName=contact.LastName;
	this->Nickname=contact.Nickname;
	this->PhoneNumber=contact.PhoneNumber;
	this->PhoneNumber=contact.PhoneNumber;
}
