/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:39:52 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/21 16:08:19 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string new_name, std::string new_type)
{
	name = new_name;
	type = new_type;
}

void	Zombie::announcement(void) const 
{
	std::cout << name << " || " << type << " || " << "BRAAIINNNSSSS" << std::endl;
}

void    randomChump()
{
    std::string names[10] = {"Tyler", "Keesha", "Bayleigh", "Nicole", \
        "Ian", "Kevin", "Da'Vonne", "Memphis", "Janelle", "Dani"};
    Zombie new_zombie(names[rand() % 10], "Happy");
	
    new_zombie.announcement();
}
