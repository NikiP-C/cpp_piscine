/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:39:49 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/09/21 16:11:04 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string typeToSet)
{
	this->type = typeToSet;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*new_zombie;
	new_zombie = new Zombie(name, this->type);

	return (new_zombie);
}

std::string pick_type()
{
    ZombieEvent ZomEv;
    std::string types[10] = {"Happy", "Angry", "Sad", "Disgusted", \
        "Bored", "Loving", "Silly", "Scared", "Angry", "Confused"};

    int i = rand() % 10;
    return (types[i]);
}