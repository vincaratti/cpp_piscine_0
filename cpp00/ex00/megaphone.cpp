/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:19:21 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/24 14:34:19 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	str_toupper(std::string& str)
{
	std::string::iterator	it;
	for (it = str.begin(); it < str.end(); it++)
		*it = std::toupper(*it);
}

int	main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
		return (std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" 
			<< std::endl, 0);
	for (int i = 1; i < argc; i++)
		str += argv[i];
	str_toupper(str);
	std::cout << str << std::endl;
	return (0);
}
