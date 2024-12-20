/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:57:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 12:35:30 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	contact_num = 0;
}

int	PhoneBook::get_addcontact_index(void)
{
	static int	i;

	if (i > 7)
		i = 0;
	i++;
	return (i - 1);
}

//How to handle: A saved contact can’t have empty fields.
void	PhoneBook::add_contact(std::string *contact_info)
{
	int		i;
	Contact	new_contact;

	new_contact.set_firstname(contact_info[0]);
	new_contact.set_lastname(contact_info[1]);
	new_contact.set_nickname(contact_info[2]);
	new_contact.set_phone(contact_info[3]);
	new_contact.set_secret(contact_info[4]);
	i = get_addcontact_index();
	contacts[i] = new_contact;
	if (contact_num < 8)
		contact_num++;
}

std::string	PhoneBook::format_wide(std::string str, size_t width)
{
	if (str.length() > 10)
		return (str.substr(0, width - 1) + ".");
	return (str + std::string(width - str.length(), ' '));
}

//Start from index 1 instead of 0??
void	PhoneBook::display_phonebook(void)
{
	int			i;

	i = 0;
	while (i < contact_num)
	{
		std::cout << i << "|" + format_wide(contacts[i].get_firstname(), 10) + "|" + format_wide(contacts[i].get_lastname(), 10) + "|" + format_wide(contacts[i].get_nickname(), 10) << std::endl;
		i++;
	}
}

void	PhoneBook::display_contact(int i)
{
	if (i >= contact_num || i < 0)
		std::cout << "Incorrect index" << std::endl;
		//define a relevant behavior
	else
	{
		std::cout << contacts[i].get_firstname() << std::endl;
		std::cout << contacts[i].get_lastname() << std::endl;
		std::cout << contacts[i].get_nickname() << std::endl;
		std::cout << contacts[i].get_phone() << std::endl;
		std::cout << contacts[i].get_secret() << std::endl;
	}
}