/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:14:59 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/19 19:31:47 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream> 
#include <string>
#include <iomanip>

class Zombie
{
	std::string	name;
	std::string	type;
	public:
		void	announcement(void) const;
 
		Zombie(std::string new_name, std::string new_type);
};

void    randomChump();

#endif
