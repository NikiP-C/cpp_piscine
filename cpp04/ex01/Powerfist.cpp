/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Powerfist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 16:49:35 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:45:50 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50)
{
    return;
}

PowerFist::~PowerFist()
{
    
}

PowerFist::PowerFist(PowerFist &nw)
{
    *this = nw;
}

PowerFist &PowerFist::operator=(const PowerFist &nw)
{
    this->Name = nw.getName();
    this->APCost = nw.getAPCost();
    this->Damage = nw.getDamage();
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
} 