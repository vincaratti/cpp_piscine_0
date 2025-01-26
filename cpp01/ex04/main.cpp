/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcaratti <vcaratti@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:29:07 by vcaratti          #+#    #+#             */
/*   Updated: 2025/01/26 11:58:40 by vcaratti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>

int main( int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout<< 	"Wrong number of argument, 3 expected, got " <<
				argc - 1 << std::endl;
		return (1);
	}
	std::ifstream	t(argv[1]);
	if (!t.good())
	{
		std::cout <<	"Cannot open/read file: " <<
				argv[1] << std::endl;
		return (1);
	}
	std::stringstream buffer;
	buffer << t.rdbuf();
	std::string file_str = buffer.str();

	size_t	last_find = 0;
	size_t	current_find = 0;
	while (1)
	{
		current_find = file_str.find(argv[2], last_find);
		if (current_find == (size_t)-1)
			break ;
		file_str.erase(current_find, strlen(argv[2]));
		file_str.insert(current_find, argv[3]);
		last_find = current_find;
	}
	if (last_find == (size_t)0)
	{
		std::cout <<	"Nothing to replace" << std::endl;
		return (1);
	}
	std::string	newname = argv[1];
	newname += ".replace";
	std::ofstream	outf(newname.c_str());
	outf << file_str;
	outf.close();
	return (0);
}
