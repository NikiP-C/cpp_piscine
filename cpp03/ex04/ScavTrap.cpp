/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:37 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 16:08:21 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string NewName) : ClapTrap(NewName) 
{
    HitPoints = 100;
    MaxHitPoints = 100;
    EnergyPoints = 50;
    MaxEnergyPoints = 50;
    MeleeDamage = 20;
    RangedDamage = 15;
    ArmorReduction = 3;
    std::cout << "SCAV-TP fucionality was added - I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & old) : ClapTrap(old)
{
    *this = old;
}

ScavTrap::~ScavTrap()
{
    std::cout << "SCAV-TP " << Name << " Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!"  << std::endl;
    return ;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string challenges[6] = {"say the alphabet backwards", "stand on their head for 30 seconds", \
    "go around telling strangers they love them very much", "go as low can you go limbo dancing", \
    "do 150 jumping Jills", "do the cha cha cha"};
    int attack_number;

    if (EnergyPoints >= 25)
    {
        EnergyPoints -= 25;
        attack_number = (rand() % 5);
        std::cout << "SCAV-TP " << Name << " challenges the newcomer by asking " << target << " too " << challenges[attack_number] << std::endl;
    }
    else
    {
        std::cout << "SCAV-TP " << Name << " has " << EnergyPoints << " which isn't enough for an attack" << std::endl;
    }
} 

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << Name << " attacks " << target << " when he came to close causing" \
    << RangedDamage << " points of damage." << std::endl;
    return ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SCAV-TP " << Name << " attacks " << target << "when he tried to open the door causing" \
    << RangedDamage << " points of damage." << std::endl;
    return ;
}