/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 15:44:38 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:45:55 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("PlasmaRifle", 5, 21)
{
    return;
}

PlasmaRifle::~PlasmaRifle()
{
    
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &nw)
{
    *this = nw;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &nw)
{
    this->Name = nw.getName();
    this->APCost = nw.getAPCost();
    this->Damage = nw.getDamage();
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
} 
