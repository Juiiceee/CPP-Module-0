#include <iostream>
#include <cstdlib>
# include <stdio.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	int	i = 0;
	PhoneBook phone;
	std::string str;
	while (str != "EXIT")
	{
		phone.lob();
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
		}
		while (str != "ADD" && str != "SEARCH" && str != "EXIT")
		{
			str.clear();
			std::cerr << "Veuillez rentrer dans un des cas" << std::endl;
			std::getline(std::cin, str);
			if (std::cin.eof())
			{
				std::cin.clear();
				clearerr(stdin);
			}
		}
		if (str == "ADD")
			i = phone.setcontact();
		else if (str == "SEARCH")
			phone.tab(i);
		else if (str == "EXIT")
			exit(0);
		str.clear();
	}
	return (0);
}
