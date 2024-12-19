/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:57:38 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/19 11:44:20 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Change to accomplish this: Once all the fields have been completed, add the contact to the phonebook. --> maybe outside this function create an array of strings to pass as argument to the add_contact function.
//How to handle: A saved contact can’t have empty fields.
int	PhoneBook::get_addcontact_index(void)
{
	static int	i;

	if (i > 7)
		i = 0;
	i++;
	return (i - 1);
}

void	PhoneBook::add_contact(string *contact_info)
{
	std::cout << "Enter first name: ";
	std::cin >> field_input;
	phonebook.contacts[i].first_name = field_input;
	std::cout << "Enter last name: ";
	std::cin >> field_input;
	phonebook.contacts[i].last_name = field_input;
	std::cout << "Enter nickname: ";
	std::cin >> field_input;
	phonebook.contacts[i].nickname = field_input;
	std::cout << "Enter phone number: ";
	std::cin >> field_input;
	phonebook.contacts[i].phone_num = field_input;
	std::cout << "Enter darkest secret: ";
	std::cin >> field_input;
	phonebook.contacts[i].secret = field_input;
}

//Intoduce: Each column must be 10 characters wide. If the text is longer than the column, it must be truncated and the last displayable character must be replaced by a dot (’.’).
void	PhoneBook::search_contact(PhoneBook phonebook)
{
	int	i;

	while (i < phonebook.contact_num)
	{
		std::cout << i << "|" << phonebook.contacts[i].first_name << "|" << phonebook.contacts[i].last_name << "|" << phonebook.contacts[i].nickname << std::endl;
		i++;
	}
	std::cout << "Enter the index of the entry to display: ";
	std::cin >> i;
	if (i >= phonebook.contact_num || i < 0)
		//define a relevant behavior
	else
	{
		std::cout << phonebook.contacts[i].first_name << std::endl;
		std::cout << phonebook.contacts[i].last_name << std::endl;
		std::cout << phonebook.contacts[i].nickname << std::endl;
		std::cout << phonebook.contacts[i].phone_num << std::endl;
		std::cout << phonebook.contacts[i].secret << std::endl;
	}
}