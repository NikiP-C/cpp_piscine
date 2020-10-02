/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flagtrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:37 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 21:18:03 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "flagtrap.hpp"

flagtrap::flagtrap() : ClapTrap()
{
    
}

flagtrap::flagtrap(std::string NewName) : ClapTrap(NewName) 
{
    HitPoints = 100;
    MaxHitPoints = 100;
    EnergyPoints = 100;
    MaxEnergyPoints = 100;
    MeleeDamage = 30;
    RangedDamage = 20;
    ArmorReduction = 5;
   
    std::cout << "FR4G-TP fucionality was added - Hey, check me out everybody! I'm dancin', I'm dancin'!" << std::endl;
}

flagtrap::flagtrap(flagtrap & old) : ClapTrap(old)
{
    *this = old;
}

flagtrap::~flagtrap()
{
    std::cout << "FR4G-TP " << Name << " - was destroyed Unce! Unce! I think I lost the beat..." << std::endl;
    return ;
}

void    flagtrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string attacks[5] = {"ridding over", "spraying a watergun at", "throwning trash at", "pincher gripping", "staring at"};
    int attack_number;

    if (EnergyPoints >= 25)
    {
        EnergyPoints -= 25;
        attack_number = (rand() % 5);
        std::cout << "FR4G-TP " << Name << " attacks by " << attacks[attack_number] << " " << target << \
        " that did " << (rand() % 30) << " points of damage." << std::endl;
    }
    else
    {
        std::cout << "FR4G-TP " << Name << " has " << EnergyPoints << " which isn't enough for an attack" << std::endl;
    }
    
} 