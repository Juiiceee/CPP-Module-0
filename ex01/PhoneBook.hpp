/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:56:51 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/08 17:46:15 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
	private:
		Contact	_repertoire[8];
	public:
		PhoneBook();
		~PhoneBook();
		int		setcontact(void);
		void	lob(void);
		void	tab(int i);

};

int	ft_stoi(std::string str);

#endif
