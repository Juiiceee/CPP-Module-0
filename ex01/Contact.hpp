/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:04:55 by lbehr             #+#    #+#             */
/*   Updated: 2024/05/01 17:48:31 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
