#include "PhoneBook.hpp"

int	ft_stoi(std::string str)
{
	int i = 0;
	long long int num = 0;
	if (str.empty() || !isdigit(str[i]))
		return (-1);
	while (isdigit(str[i]) && str[i])
	{
		num = num * 10 + (str[i++] - 48);
		if (num > 2147483647)
			return (-1);
	}
	return (num);
}

void	PhoneBook::lob()
{
	std::cout << "Hello," << std::endl;
	std::cout << "les commandes sont :" << std::endl;
	std::cout << Red << "ADD " << resetcolor << "\t: enregistrer un nouveau contact" << std::endl;
	std::cout << Red << "SEARCH " << resetcolor << "\t: afficher le contact demandé" << std::endl;
	std::cout << Red << "EXIT " << resetcolor << "\t: quitter l'annuaire" << std::endl;
}

int	PhoneBook::setcontact()
{
	static int	i = 0;

	this->repertoire[i % 8].setall();
	this->repertoire[i % 8].setindex(i);
	return (++i);
}

void	PhoneBook::tab(int i)
{
	std::string str;
	int num;

	if (i > 7)
		i = 7;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int j = 0; j < i + 1; j++)
		this->repertoire[j].print();
	std::cout << "veuillez renseigner l'index que vous voulez afficher\n";
	std::cin >> str;
	num = ft_stoi(str);
	if (num > i || num == -1)
	{
		std::cout << "Il faut renseigner un nombre qui existe/qui existe dans la liste\n";
		return ;
	}
	this->repertoire[num].printindex();
}
