/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:04:55 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/10 16:10:57 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# define resetcolor "\033[0m"
# define Red "\033[31m"
# define Green "\033[32m"
# define Blue "\033[34m"
# define Darkblack "\033[2;30m"

# include <iostream>
# include <string>
# include <iomanip>
# include <stdio.h>

class Contact
{
	private:
		int				_index;
		std::string		_prenom;
		std::string		_nomDeFamille;
		std::string		_surnom;
		std::string		_numero;
		std::string		_dark;
		std::string		getinput(void);
		std::string		getinputnum(void);
		std::string		printdot(std::string str);
	public:
		Contact();
		~Contact();
		void			setall(void);
		void			setindex(int i);
		void			print(void);
		void			printindex(void);

};

#endif
