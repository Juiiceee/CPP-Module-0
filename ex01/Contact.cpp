/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:58:44 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/10 17:50:07 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

std::string	Contact::getinput(void)
{
	std::string input;
	int			i;
	bool		isdigit;

	do
	{
		i = 0;
		isdigit = true;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
		}
		int j = (int)input.length();
		(void)j;
		while(i < (int)input.length() || !isdigit)
		{
			if (!std::isprint(input[i++]))
			{
				std::cerr << "Veuillez renseigner que des caracteres printables" << std::endl;
				isdigit = false;
				break ;
			}
		}
	}
	while (input.empty() || !isdigit);
	return (input);
}

std::string	Contact::getinputnum(void)
{
	std::string	input;
	int			i = 0;
	bool		isdigit;

	do
	{
		i = 0;
		isdigit = true;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
		}
		while(i < (int)input.length() || !isdigit)
		{
			if (!std::isdigit(input[i++]))
			{
				std::cerr << "Veuillez renseigner que des chiffres" << std::endl;
				isdigit = false;
				break ;
			}
		}
	}
	while (input.empty() || !isdigit);
	return (input);
}

void	Contact::setindex(int i)
{
	this->_index = i;
}


void	Contact::setall(void)
{
	std::cout << "veuillez mettre le prenom :\n";
	this->_prenom = this->getinput();
	std::cout << "veuillez mettre le nom de famille :\n";
	this->_nomDeFamille = this->getinput();
	std::cout << "veuillez mettre le surnom :\n";
	this->_surnom = this->getinput();
	std::cout << "veuillez mettre le numero seulement des chiffres :\n";
	this->_numero = this->getinputnum();
	std::cout << "veuillez mettre son son secret le plus " << Darkblack << "darky" << resetcolor << " :\n";
	this->_dark = this->getinput();
}

std::string	Contact::printdot(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::print(void)
{
	std::cout << "|" << std::setw(10) << this->_index;
	std::cout << "|" << std::setw(10) << this->printdot(this->_prenom);
	std::cout << "|" << std::setw(10) << this->printdot(this->_nomDeFamille);
	std::cout << "|" << std::setw(10) << this->printdot(this->_surnom) << "|" << std::endl;
}

void	Contact::printindex(void)
{
	std::cout << "Index: " << this->_index << std::endl;
	std::cout << "Prenom: " << this->_prenom << std::endl;
	std::cout << "NomDeFamille: " << this->_nomDeFamille << std::endl;
	std::cout << "Surnom: " << this->_surnom << std::endl;
	std::cout << "Numero: " << this->_numero << std::endl;
	std::cout << "Secret trop dark: " << this->_dark << std::endl;
	std::cout << "Veuillez appuyer sur nimporte quelles touches pour avancer\n";
	std::cin.ignore();
}
