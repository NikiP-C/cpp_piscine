/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:43:27 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:44:40 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : Name(name), APCost(apcost), Damage(damage)
{
    return;
}

AWeapon::AWeapon()
{
    
}
AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon &nw)
{
    *this = nw;
}

AWeapon &AWeapon::operator=(const AWeapon &nw)
{
    this->Name = nw.getName();
    this->APCost = nw.getAPCost();
    this->Damage = nw.getDamage();
    return (*this);
}

std::string AWeapon::getName() const
{
    return (this->Name);
}
int         AWeapon::getAPCost() const
{
    return (this->APCost);
}
int         AWeapon::getDamage() const
{
    return (this->Damage);
}