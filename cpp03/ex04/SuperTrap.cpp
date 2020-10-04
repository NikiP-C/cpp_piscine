/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 18:25:05 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 17:53:48 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : flagtrap(), NinjaTrap()
{
    std::cout << "SuperTrap" << Name << "is created" << std::endl; 
}

SuperTrap::SuperTrap(std::string NewName) : flagtrap(NewName), NinjaTrap(NewName)
{
    HitPoints = 100;
    MaxHitPoints = 100;
    EnergyPoints = 120;
    MaxEnergyPoints = 120;
    MeleeDamage = 60;
    RangedDamage = 20;
    ArmorReduction = 5;
}

SuperTrap::SuperTrap(SuperTrap & copy) : flagtrap(copy), NinjaTrap(copy)
{
    *this = copy; 
}

SuperTrap::~SuperTrap() 
{
    std::cout << "Supertrap" << Name << "is downnnnn...." << std::endl; 
}

void    SuperTrap::meleeAttack(std::string const & target) 
{
    NinjaTrap::meleeAttack(target);
}

void    SuperTrap::rangedAttack(std::string const & target) 
{
    flagtrap::rangedAttack(target);
}