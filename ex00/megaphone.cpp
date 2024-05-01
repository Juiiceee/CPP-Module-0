/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:01:05 by lbehr             #+#    #+#             */
/*   Updated: 2023/12/20 15:01:06 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string  toup(std::string str)
{
	for(int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

std::string join(int argc, char **argv)
{
	int			i = 1;
	std::string	str;

	while (i < argc)
		str += argv[i++];
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	std::cout << toup(join(argc, argv)) + "\n";
}
