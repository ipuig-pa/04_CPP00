/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:57:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/19 12:38:59 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	int i;

	i = get_addcontact_index();
	contacts[i].first_name = contact_info[0];
	contacts[i].last_name = contact_info[1];
	contacts[i].nickname = contact_info[2];
	contacts[i].phone_num = contact_info[3];
	contacts[i].secret = contact_info[4];
	contact_num++;
}

//Start from index 1 instead of 0??
//Intoduce: Each column must be 10 characters wide. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).

//NOT IMPLEMENTED YET: If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).
void	PhoneBook::display_phonebook(void)
{
	int	i;

	i = 0;
	while (i < contact_num)
	{
		std::cout << i << "|" << (contacts[i].first_name).resize(10) << "|" << (contacts[i].last_name).resize(10) << "|" << (contacts[i].nickname).resize(10) << std::endl;
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
		std::cout << contacts[i].first_name << std::endl;
		std::cout << contacts[i].last_name << std::endl;
		std::cout << contacts[i].nickname << std::endl;
		std::cout << contacts[i].phone_num << std::endl;
		std::cout << contacts[i].secret << std::endl;
	}
}