/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:03:26 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/18 15:55:50 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int argc, char **argv)
{
	int			i;
	size_t		j;
	std::string	text;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = 0;
			text = argv[i];
			while (j++ < text.length())
				std::cout << (char) std::toupper(text[j - 1]);
		}
	}
	std::cout << std::endl;
	return (0);
}
