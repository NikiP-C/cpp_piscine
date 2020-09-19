/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:23:45 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/19 19:34:58 by nphilipp      ########   odam.nl         */
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
		void	setZombieType(std::string typeToSet);
		Zombie*	newZombie(std::string name);
};

std::string    pick_type();

#endif