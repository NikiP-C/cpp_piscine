/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 19:36:51 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/21 16:09:53 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie *newZombie;
    ZombieEvent ZombieEvent;
    std::string type;

    
    type = pick_type();
    randomChump();
    ZombieEvent.setZombieType(type);
    newZombie = ZombieEvent.newZombie("Niki");
    newZombie->announcement();
}