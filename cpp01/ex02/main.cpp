/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:36:51 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/08/07 15:00:00 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    zombie *newZombie;
    ZombieEvent ZombieEvent;
    std::string type;

    
    type = pick_type();
    randomChump();
    ZombieEvent.setZombieType(type);
    newZombie = ZombieEvent.newZombie("Niki");
    newZombie->announcement();
}