/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:22:15 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/19 12:32:27 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

//which variables should be private and which public?
int	main(void)
{
	PhoneBook	phonebook;
	std::string	action;
	std::string	*cont_info;
	int			index;

	phonebook.contact_num = 0;
	while (1)
	{
		std::cout << "Type action: ";
		std::cin >> action;
		if (std::action.compare("ADD") == 0)
		{
			cont_info = ask_contact_info();
			phnoebook.add_contact(cont_info);
		}
		else if (std::action.compare("SEARCH") == 0)
		{
			phonebook.display_phonebook();
			std::cout << "Enter the index of the entry to display: ";
			std::cin >> index;
			phonebook.display_contact(index);
		}
		else if (std::action.compare("EXIT") == 0)
		{
			//clean???
			break;
		}
	}
	return (0);
}

//get with getline instead of cin (more than one word)
string	*ask_contact_info(void)
{
	std::string	*cont_info;
	
	std::cout << "Enter first name: ";
	std::cin >> cont_info[0];
	std::cout << "Enter last name: ";
	std::cin >> cont_info[1];
	std::cout << "Enter nickname: ";
	std::cin >> cont_info[2];
	std::cout << "Enter phone number: ";
	std::cin >> cont_info[3];
	std::cout << "Enter darkest secret: ";
	std::cin >> cont_info[4];
	return (cont_info);
}
