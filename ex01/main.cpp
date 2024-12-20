/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:22:15 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 13:20:18 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	check_non_empty(std::string str, std::string field)
{
	
	while (str.empty())
	{
		std::cout << "A contact cannot have empty fields. Enter " + field + ": ";
		std::getline(std::cin, str);
	}
	return (str);
}

std::string	*ask_contact_info(std::string *cont_info)
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, cont_info[0]);
	cont_info[0] = check_non_empty(cont_info[0], "first name");
	std::cout << "Enter last name: ";
	std::getline(std::cin, cont_info[1]);
	cont_info[1] = check_non_empty(cont_info[1], "last name");
	std::cout << "Enter nickname: ";
	std::getline(std::cin, cont_info[2]);
	cont_info[2] = check_non_empty(cont_info[2], "nickname");
	std::cout << "Enter phone number: ";
	std::getline(std::cin, cont_info[3]);
	cont_info[3] = check_non_empty(cont_info[3], "phone number");
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, cont_info[4]);
	cont_info[4] = check_non_empty(cont_info[4], "darkest secret");
	return (cont_info);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	action;
	std::string	index;
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
			std::getline(std::cin, index);
			phonebook.display_contact(index);
		}
		else if (action.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
