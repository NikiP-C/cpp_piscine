/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 18:25:05 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 21:17:02 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap()
{
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

SuperTrap::~SuperTrap()
{

}