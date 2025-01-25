/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:08:16 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/25 12:16:26 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	cursor = 0;
}

PhoneBook::~PhoneBook(){}

PhoneBook::PhoneBook(const PhoneBook &phonebook)
{
	this->cursor = 0;
	for (int i = 0; i < 8; i++)
		this->contacts[i] = Contact(phonebook.contacts[i]);
}

void	PhoneBook::add(void)
{
	request_info(this->contacts[this->cursor]);
	cursor++;
	cursor = cursor % 8;
}

void	PhoneBook::search(void)
{
	int		i;
	std::string	i_str;

	if (this->contacts[0].active == 0)
	{
		std::cout << "No contacts in contacts list\n";
		return ;
	}
	print_contacts();
	std::cout << "Contact Index: ";
	std::cin >> i_str;
	if (!str_is_number(i_str))
	{
		std::cout << "bad index.\n";
		return ;
	}
	i = atoi(i_str.c_str());
	if (i < 1 || i > 8 || this->contacts[i - 1].active == 0)
	{
		std::cout << "bad index.\n";
		return ;
	}
	std::cout << "Contact #" << i << std::endl <<
	"First Name: " << this->contacts[i - 1].FirstName << std::endl <<
	"Last Name: " << this->contacts[i - 1].LastName << std::endl <<
	"Nickame: " << this->contacts[i - 1].Nickname << std::endl <<
	"Phone Number: " << this->contacts[i - 1].PhoneNumber << std::endl <<
	"Darkest Secret: " << this->contacts[i - 1].DarkestSecret << std::endl;
}

std::string	PhoneBook::treat_str(const std::string &str)
{
	std::string	ret;
	int		i;

	for (i = 0; i < (10 - (int)str.length()); i++)
		ret += " ";
	ret += str.substr(0, 10 - i);
	if (str.length() > 10)
		ret[9] = '.';
	return (ret);
}

bool PhoneBook::str_is_number(const std::string& str)
{
	std::string::const_iterator	it;
	
	it = str.begin();
    	while (it != str.end() && std::isdigit(*it))
		++it;
    	return (!str.empty() && it == str.end());
}

void	PhoneBook::print_contacts(void)
{
	std::cout<<"|   index  |FirstName | LastName | Nickname |" << std::endl;
	for (int i = 0; (i < 8 && this->contacts[i].active == 1); i++)
		std::cout << "|         " << i + 1 << "|" <<
			treat_str(this->contacts[i].FirstName) << "|" <<
			treat_str(this->contacts[i].LastName) << "|" <<
			treat_str(this->contacts[i].Nickname) << "|" << std::endl;
}

void	PhoneBook::request_info(Contact &contact)
{
	std::cout << ">First Name:";
	std::getline(std::cin, contact.FirstName);
	std::cout << ">Last Name:";
	std::getline(std::cin, contact.LastName);
	std::cout << ">Nickname:";
	std::getline(std::cin, contact.Nickname);
	std::cout << ">Phone Number:";
	std::getline(std::cin, contact.PhoneNumber);
	std::cout << ">Darkest Secret:";
	std::getline(std::cin, contact.DarkestSecret);
	contact.active = 1;
}
