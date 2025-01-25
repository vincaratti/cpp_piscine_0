#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "includes.hpp"


void	start_PhoneBook(PhoneBook& pb)
{
	std::string	u_input;
	
	std::cout<< "Welcome to PhoneBook!\n";
	while (1)
	{
		std::cout << "Please enter a command: (ADD / SEARCH / EXIT)" << std::endl;
		std::getline(std::cin, u_input);
		if (u_input == "")
			std::getline(std::cin, u_input);
		if (u_input == "ADD")
			pb.add();
		else if (u_input == "SEARCH")
			pb.search();
		else if (u_input == "EXIT")
			break ;
		else
			std::cout << "bad command" << std::endl;
		std::cin.clear();
	}
}

int	main(void)
{
	PhoneBook pb;
	start_PhoneBook(pb);
	return (0);
}
