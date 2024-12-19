/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:54:18 by ipuig-pa          #+#    #+#             */
/*   Updated: 2024/12/19 12:22:15 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	private:
		int		get_addcontact_index();
		Contact	contacts[8];
		int		contact_num;

	public:
		void	add_contact(void);
		void	display_phonebook(void);
		void	display_contact(int index);
		PhoneBook ();
	

};

#endif