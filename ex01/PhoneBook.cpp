/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:57:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 17:27:32 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
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

void	PhoneBook::display_phonebook(void)
{
	int	i;

	i = 1;
	while (i <= contact_num)
	{
		std::cout << std::setfill(' ') << std::right << std::setw(10) << i << "|"
				<< std::setw(10) << (contacts[i - 1].get_firstname().length() > 10 ?
						contacts[i - 1].get_firstname().substr(0, 9) + "." :
						contacts[i - 1].get_firstname()) << "|"
				<< std::setw(10) << (contacts[i - 1].get_lastname().length() > 10 ?
						contacts[i - 1].get_lastname().substr(0, 9) + "." :
						contacts[i - 1].get_lastname()) << "|"
				<< std::setw(10) << (contacts[i - 1].get_nickname().length() > 10 ?
						contacts[i - 1].get_nickname().substr(0, 9) + "." : 
						contacts[i - 1].get_nickname()) << std::endl;
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
		std::cout << std::setfill(' ') << std::left;
		std::cout << std::setw(16) << "First name:" << contacts[i - 1].get_firstname() << std::endl;
		std::cout << std::setw(16) << "Last name:" << contacts[i - 1].get_lastname() << std::endl;
		std::cout << std::setw(16) << "Nickname:" << contacts[i - 1].get_nickname() << std::endl;
		std::cout << std::setw(16) << "Phone number:" << contacts[i - 1].get_phone() << std::endl;
		std::cout << std::setw(16) << "Darkest secret:" << contacts[i - 1].get_secret() << std::endl;
	}
}