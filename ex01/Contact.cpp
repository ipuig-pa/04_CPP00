/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:58:01 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 12:35:10 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

std::string	Contact::get_firstname(void)
{
	return (first_name);
}

std::string	Contact::get_lastname(void)
{
	return (last_name);
}

std::string	Contact::get_nickname(void)
{
	return (nickname);
}

std::string	Contact::get_phone(void)
{
	return (phone_num);
}

std::string	Contact::get_secret(void)
{
	return (secret);
}

//implement checkings for valid input in the setters? At least for input fields
void	Contact::set_firstname(std::string &fname)
{
	first_name = fname;
}

void	Contact::set_lastname(std::string &lname)
{
	last_name = lname;
}

void	Contact::set_nickname(std::string &nick)
{
	nickname = nick;
}

void	Contact::set_phone(std::string &phone)
{
	phone_num = phone;
}

void	Contact::set_secret(std::string &sec)
{
	secret = sec;
}
