/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:58:44 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/06 12:36:12 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cctype>
#include <algorithm>

std::string	Contact::getinput()
{
	std::string input;
	do
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (std::cin.clear(), "");
	}
	while (input.empty());
	return (input);
}

std::string	Contact::getinputnum()
{
	std::string	input;
	int			i = 0;
	bool		isdigit = true;

	do
	{
		isdigit = true;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (std::cin.clear(), "");
		if (input.length() != 10)
		{
			std::cout << "Veuillez renseigner 10 chiffres" << std::endl;
			isdigit = false;
		}
		while(i < (int)input.length() || !isdigit)
		{
			if (!std::isdigit(input[i++]))
			{
				std::cout << "Veuillez renseigner que des chiffres" << std::endl;
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
	this->index = i;
}


void	Contact::setall()
{
	std::cout << "veuillez mettre le prenom :\n";
	this->prenom = this->getinput();
	std::cout << "veuillez mettre le nom de famille :\n";
	this->nomDeFamille = this->getinput();
	std::cout << "veuillez mettre le surnom :\n";
	this->surnom = this->getinput();
	std::cout << "veuillez mettre le numero seulement des chiffres :\n";
	this->numero = this->getinputnum();
	std::cout << "veuillez mettre son son secret le plus " << Darkblack << "darky" << resetcolor << " :\n";
	this->dark = this->getinput();
}
