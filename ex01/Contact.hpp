/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:04:55 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/06 12:25:36 by lbehr            ###   ########.fr       */
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


class Contact
{
	private:
		int				index;
		std::string		prenom;
		std::string		nomDeFamille;
		std::string		surnom;
		std::string		numero;
		std::string		dark;
	public:
		void			setall();
		std::string		getinput();
		std::string		getinputnum();
		void			setindex(int i);
};

#endif
