/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:54:18 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/19 11:37:03 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	private:
		int		get_addcontact_index();

	public:
		Contact	contacts[8];
		int		contact_num;

		void	add_contact(void);
		void	search_contact(void);
};

#endif