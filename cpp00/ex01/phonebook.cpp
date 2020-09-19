/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 23:43:18 by niki          #+#    #+#                 */
/*   Updated: 2020/07/28 19:54:29 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	int			conadd = 0;
	int			i;
	std::string	s_index;
	std::string	input;
	int			exit = 0;
	contact		contacts[8];

	while (!exit)
	{
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			if (conadd == 8)
				std::cout << "Phonebook already contains 8 contacts" << std::endl;
			else
			{
				contacts[conadd].add_contact();
				conadd++;
			}
		}
		else if (input.compare("SEARCH") == 0)
		{
			i = 0;
			while (i < conadd)
			{
				contacts[i].print_contact_list(i);
				i++;
			}
			std::cin >> s_index; 
			if (s_index[0] >= '0' && s_index[0] <= (conadd + '0') && s_index[1] == '\0')
				contacts[s_index[0] - '0'].print_contact();
			else
				std::cout << "Input didn't match any of the index numbers in the phonebook" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
			exit = 1;
	}
    return (0);
}