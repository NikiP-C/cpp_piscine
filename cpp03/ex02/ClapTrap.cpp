/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 14:14:14 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 15:33:33 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string NewName)
{
    HitPoints = 100;
    MaxHitPoints = 100;
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

void    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " \
    << RangedDamage << " points of damage." << std::endl;
    return ;
}

void    ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << Name << " attacks " << target << " with his mellee waepon, causing " \
    << RangedDamage << " points of damage." << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    HitPoints += amount;
    if (HitPoints > MaxHitPoints)
    {
        amount -= (HitPoints - MaxHitPoints);
        HitPoints = MaxHitPoints;
    }
     std::cout << "FR4G-TP " << Name << " Got repaired worth " << (amount - ArmorReduction) << \
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
    std::cout << "FR4G-TP " << Name << " Took damage worth " << (amount - ArmorReduction) << \
    " points, still " << HitPoints << " amouth of hitpoints." << std::endl;
    return ;
}
