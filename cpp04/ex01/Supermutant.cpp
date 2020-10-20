/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Supermutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 18:38:54 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 17:22:41 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;   
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void    SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}