/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:23:45 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/08/20 19:39:22 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream> 
#include <string>
#include <iomanip>
#include "Zombie.hpp"

class	ZombieEvent
{
	std::string	type;
	
	public:
		void	setZombieType(std::string typeToSet)
		{
			type = typeToSet;
		}
		zombie*	newZombie(std::string	name)
		{
			zombie	*new_zombie;
			new_zombie = new zombie(name, type);

			return (new_zombie);
		}
};

std::string    pick_type();

#endif