/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:08:54 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 11:19:17 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "includes.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	PhoneBook(const PhoneBook &phonebook); 
	
	void		add(void);
	void		search(void);

private:
	void		print_contacts(void);
	void		request_info(Contact& contact);
	std::string	treat_str(const std::string &str);
	bool		str_is_number(const std::string &str);
	
	Contact		contacts[8];
	int		cursor;
};

#endif
