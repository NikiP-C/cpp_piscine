/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:40:26 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/26 14:17:10 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <string>
#include <iomanip>

class contact
{
	private:
    	std::string first_name;
    	std::string last_name;
    	std::string nickname;
    	std::string login;
    	std::string postal_address;
    	std::string email_address;
    	std::string phone_number;
    	std::string birthday;
    	std::string favorite_meal;
    	std::string underwear_color;
    	std::string darkest_secret;
	
	public:
		void 	add_contact();
		void	print_contact_list(int index);
		void	print_contact();
};