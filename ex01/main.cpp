#include <iostream>
#include <cstdlib>
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
		while (str != "ADD" && str != "SEARCH" && str != "EXIT")
		{
			str = "";
			std::cout << "Veuillez a rentrer dans un des cas" << std::endl;
			std::getline(std::cin, str);
		}
		if (str == "ADD")
			i = phone.setcontact();
		else if (str == "SEARCH")
			phone.tab(i);
		else if (str == "EXIT")
			exit(0);
		str = "";
	}
	return (0);
}
