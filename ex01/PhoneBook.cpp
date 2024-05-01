#include "PhoneBook.hpp"

void	PhoneBook::lob()
{
	std::cout << "Hello," << std::endl;
	std::cout << "les commandes sont :" << std::endl;
	std::cout << "ADD \t: enregistrer un nouveau contact" << std::endl;
	std::cout << "SEARCH \t: afficher le contact demandé" << std::endl;
	std::cout << "EXIT \t: quitter l'annuaire" << std::endl;
}

void	PhoneBook::setcontact()
{
	static int	i;

	i = 0;
	this->repertoire[i % 8].setall();
	this->repertoire[i % 8].setindex(i);
	i++;
}
