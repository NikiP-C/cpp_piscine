/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:39:52 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/08/03 20:53:40 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void    randomChump()
{
    std::string names[10] = {"Tyler", "Keesha", "Bayleigh", "Nicole", \
        "Ian", "Kevin", "Da'Vonne", "Memphis", "Janelle", "Dani"};
    zombie *new_zombie;
    ZombieEvent ZombieEvent;
    int i;

    i = rand() % 10;
    new_zombie = ZombieEvent.newZombie(names[i]);
    new_zombie->announcement();
    delete new_zombie;  
}
