/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:57:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 15:40:47 by ipuig-pa         ###   ########.fr       */
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
	return (std::string(width - str.length(), ' ') + str);
}

void	PhoneBook::display_phonebook(void)
{
	int	i;

	i = 1;
	while (i <= contact_num)
	{
		std::cout << std::string(9, ' ') << i << "|" + format_wide(contacts[i - 1].get_firstname(), 10) + "|" + format_wide(contacts[i - 1].get_lastname(), 10) + "|" + format_wide(contacts[i - 1].get_nickname(), 10) << std::endl;
		i++;
	}
}

void	PhoneBook::display_contact(const std::string &index)
{
	int	i;

	if (index.length() != 1 || index[0] <= '0' || index[0] > ('0' + contact_num))
		std::cout << "Incorrect index" << std::endl;
	else
	{
		i = index[0] - '0';
		std::cout << "First name:     " + contacts[i - 1].get_firstname() << std::endl;
		std::cout << "Last name:      " + contacts[i - 1].get_lastname() << std::endl;
		std::cout << "Nickname:       " + contacts[i - 1].get_nickname() << std::endl;
		std::cout << "Phone number:   " + contacts[i - 1].get_phone() << std::endl;
		std::cout << "Darkest secret: " + contacts[i - 1].get_secret() << std::endl;
	}
}