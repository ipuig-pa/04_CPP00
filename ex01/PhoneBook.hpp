/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:54:18 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 17:27:27 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{

public:

	PhoneBook(void);
	void	add_contact(std::string *contact_info);
	void	display_phonebook(void);
	void	display_contact(const std::string &index);

private:

	int			get_addcontact_index();
	Contact		contacts[8];
	int			contact_num;

};

#endif