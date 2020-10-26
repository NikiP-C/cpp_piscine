/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:20:58 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/26 14:21:44 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::add_contact()
{
	std::cout << "FIRST NAME:";
	std::getline (std::cin, first_name);
	std::cout << "LAST_NAME:";
	std::getline (std::cin, last_name);
	std::cout << "NICKNAME:";
	std::getline (std::cin, nickname);
	std::cout << "LOGIN:";
	std::getline (std::cin, login);
	std::cout << "POSTAL ADDRESS:";
	std::getline (std::cin, postal_address);
	std::cout << "EMAIL ADDRESS:";
	std::getline (std::cin, email_address);
	std::cout << "PHONE NUMBER:";
	std::getline (std::cin, phone_number);
	std::cout << "BIRTHDAY:";
	std::getline (std::cin, birthday);
	std::cout << "FAVORITE MEAL:";
	std::getline (std::cin, favorite_meal);
	std::cout << "UNDERWEAR COLOR:";
	std::getline (std::cin, underwear_color);
	std::cout << "DARKEST SECRET:";
	std::getline (std::cin, darkest_secret);
}

void	contact::print_contact_list(int index)
{
	std::cout << std::setw(10) << index << "|";
	if (first_name.size() > 10)
		std::cout << first_name.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << first_name << "|";

	if (last_name.size() > 10)
		std::cout << last_name.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << last_name << "|";

	if (nickname.size() > 10)
		std::cout << nickname.substr(0,9) << "." << std::endl;
	else
		std::cout << std::setw(10) << nickname << std::endl;
}

void	contact::print_contact()
{			
	std::cout << "FIRST NAME: " << first_name << std::endl;
	std::cout << "LAST_NAME: " << last_name << std::endl;
	std::cout << "NICKNAME: " << nickname << std::endl;
	std::cout << "LOGIN: " << login << std::endl;
	std::cout << "POSTAL ADDRESS: " << postal_address << std::endl;
	std::cout << "EMAIL ADDRESS: " << email_address << std::endl;
	std::cout << "PHONE NUMBER: " << phone_number << std::endl;
	std::cout << "BIRTHDAY: " << birthday << std::endl;
	std::cout << "FAVORITE MEAL: " << favorite_meal << std::endl;
	std::cout << "UNDERWEAR COLOR: " << underwear_color << std::endl;
	std::cout << "DARKEST SECRET: " << darkest_secret << std::endl;
}
