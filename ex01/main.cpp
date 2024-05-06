#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "Contact.hpp"

using namespace std;

int main()
{
	Contact cont;
	PhoneBook phone;
	std::string str;
	while (str != "EXIT")
	{
		phone.lob();
		cin >> str;
		while (str != "ADD" && str != "SEARCH" && str != "EXIT" /*&& !str.empty()*/)
		{
			std::cout << "Veuillez a rentrer dans un des cas" << std::endl;
			std::cin >> str;
		}
		if (str == "ADD")
			phone.setcontact();
		else if (str == "SEARCH")
		{

		}
		else if (str == "EXIT")
			exit(0);
		str = "";
	}
	return (0);
}
