/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:39:52 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/19 19:32:12 by nphilipp      ########   odam.nl         */
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
    Zombie *new_zombie;
    ZombieEvent ZombieEvent;
    int i;

    i = rand() % 10;
    new_zombie = ZombieEvent.newZombie(names[i]);
    new_zombie->announcement();
    delete new_zombie;  
}
