/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:43:27 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 21:10:42 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : Name(name), APCost(apcost), Damage(damage)
{
    
}

AWeapon::~AWeapon()
{
    
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