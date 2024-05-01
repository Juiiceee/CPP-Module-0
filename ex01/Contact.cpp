/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:58:44 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/01 17:48:13 by lbehr            ###   ########.fr       */
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
		while(i < (int)input.length())
		{
			if (!std::isdigit(input[i]))
			{
				std::cout << "Veuillez renseigner que des chiffres" << std::endl;
				isdigit = false;
				break ;
			}
			i++;
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
	this->prenom = this->getinput();
	this->nomDeFamille = this->getinput();
	this->surnom = this->getinput();
	this->numero = this->getinputnum();
	this->dark = this->getinput();
}