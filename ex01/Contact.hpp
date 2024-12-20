/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:58:04 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/20 13:31:32 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_num;
	std::string	secret;

	public:
	Contact(void);

	std::string	get_firstname(void);
	std::string	get_lastname(void);
	std::string	get_nickname(void);
	std::string	get_phone(void);
	std::string	get_secret(void);

	void	set_firstname(const std::string &fname);
	void	set_lastname(const std::string &lname);
	void	set_nickname(const std::string &nick);
	void	set_phone(const std::string &phone);
	void	set_secret(const std::string &sec);
};

#endif