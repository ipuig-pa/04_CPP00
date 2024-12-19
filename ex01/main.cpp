/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:22:15 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/19 11:43:44 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

//which variables should be private and which public?
int	main(void)
{
	PhoneBook	phonebook;
	string		action;
	string		*cont_info;

	phonebook.contact_num = 0;
	while (1)
	{
		std::cout << "Type action: ";
		std::cin >> action;
		if (action == "ADD")
		{
			cont_info = ask_contact_info();
			phnoebook.add_contact(cont_info);
		}
		else if (action == "SEARCH")
			phonebook.search_contact();
		else if (action == "EXIT")
		{
			//clean???
			break;
		}
	}
	return (0);
}

string	*ask_contact_info(void)
{
	string	field_input;
	string	*cont_info;
	
	std::cout << "Enter first name: ";
	std::cin >> field_input;
	cont_info[0] = field_input;
	std::cout << "Enter last name: ";
	std::cin >> field_input;
	cont_info[1] = field_input;
	std::cout << "Enter nickname: ";
	std::cin >> field_input;
	cont_info[2] = field_input;
	std::cout << "Enter phone number: ";
	std::cin >> field_input;
	cont_info[3] = field_input;
	std::cout << "Enter darkest secret: ";
	std::cin >> field_input;
	cont_info[4] = field_input;
	return (cont_info);
}
