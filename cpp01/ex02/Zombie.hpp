/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:14:59 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/08/03 20:38:24 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream> 
#include <string>
#include <iomanip>

class zombie
{
	std::string	name;
	std::string	type;
	public:
		void	announcement(void)
		{
			std::cout << name << " || " << type << " || " << "BRAAIINNNSSSS" << std::endl;
		}
 
		zombie(std::string new_name, std::string new_type)
		{
			name = new_name;
			type = new_type;
		}
};

void    randomChump();

#endif
