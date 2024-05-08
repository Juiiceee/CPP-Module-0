#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{
	
}

int	ft_stoi(std::string str)
{
	int i = 0;
	long long int num = 0;
	if (str[0] == '-')
		return (-2);
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

void	PhoneBook::lob(void)
{
	std::cout << "\nHello," << std::endl;
	std::cout << "les commandes sont :" << std::endl;
	std::cout << Red << "ADD " << resetcolor << "\t: enregistrer un nouveau contact" << std::endl;
	std::cout << Red << "SEARCH " << resetcolor << "\t: afficher le contact demandé" << std::endl;
	std::cout << Red << "EXIT " << resetcolor << "\t: quitter l'annuaire" << std::endl;
}

int	PhoneBook::setcontact(void)
{
	static int	i = 0;

	this->_repertoire[i % 8].setall();
	this->_repertoire[i % 8].setindex(i % 8);
	return (++i);
}

void	PhoneBook::tab(int i)
{
	std::string	str;
	int			num;

	if (i > 8)
		i = 8;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int j = 0; j < i; j++)
		this->_repertoire[j].print();
	std::cout << "Veuillez renseigner l'index que vous voulez afficher ou si vous voulez retourner au debut tapez \"-\" :\n";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (std::cin.clear(), clearerr(stdin));
	num = ft_stoi(str);
	if (num == -2)
		return ;
	if (num >= i || num == -1)
	{
		std::cerr << "Il faut renseigner un nombre qui existe/qui existe dans la liste\n";
		return ;
	}
	this->_repertoire[num].printindex();
}
