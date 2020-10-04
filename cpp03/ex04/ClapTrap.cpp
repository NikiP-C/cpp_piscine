/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 14:14:14 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 16:06:28 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
}

ClapTrap::ClapTrap(std::string NewName)
{
    Level = 1;
    Name = NewName;Name = NewName;
    std::cout << "ClapTrap " << Name <<  " - was created The Base has arived" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &old)
{
    *this = old;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Bye Bye - ClapTrap destructor was called" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    HitPoints += amount;
    if (HitPoints > MaxHitPoints)
    {
        amount -= (HitPoints - MaxHitPoints);
        HitPoints = MaxHitPoints;
    }
     std::cout << Name << " Got repaired worth " << (amount - ArmorReduction) << \
    " points, they now have " << HitPoints << " amouth of hitpoints." << std::endl;
    return ; 
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints -= (amount - ArmorReduction);
    if (HitPoints < 0)
    {
        amount += HitPoints;
        HitPoints = 0;
    }
    std::cout << Name << " Took damage worth " << (amount - ArmorReduction) << \
    " points, still " << HitPoints << " amouth of hitpoints." << std::endl;
    return ;
}

std::string    ClapTrap::getName()
{
    return(this->Name);
}
