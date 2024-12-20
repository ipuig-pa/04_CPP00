/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:22:15 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 12:36:10 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//get with getline instead of cin (more than one word)
std::string	*ask_contact_info(std::string *cont_info)
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, cont_info[0]);
	std::cout << "Enter last name: ";
	std::getline(std::cin, cont_info[1]);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, cont_info[2]);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, cont_info[3]);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, cont_info[4]);
	return (cont_info);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	action;
	int			index;
	std::string	cont_info[5];

	while (1)
	{
		std::cout << "Type action: ";
		std::getline(std::cin, action);
		if (action.compare("ADD") == 0)
		{
			ask_contact_info(cont_info);
			phonebook.add_contact(cont_info);
		}
		else if (action.compare("SEARCH") == 0)
		{
			phonebook.display_phonebook();
			std::cout << "Enter the index of the entry to display: ";
			std::cin >> index;
			std::cin.ignore();
			phonebook.display_contact(index);
		}
		else if (action.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
