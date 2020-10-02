/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:37 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 22:09:31 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string NewName)
{
    HitPoints = 100;
    MaxHitPoints = 100;
    EnergyPoints = 50;
    MaxEnergyPoints = 50;
    Level = 1;
    Name = NewName;
    MeleeDamage = 20;
    RangedDamage = 15;
    ArmorReduction = 3;
    std::cout << "FR4G-TP " << Name <<  " I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "FR4G-TP " << Name << " Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!"  << std::endl;
    return ;
}

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << Name << " attacks " << target << "with all the distance, causing " \
    << RangedDamage << " points of damage." << std::endl;
    return ;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << Name << " attacks " << target << " from really close by, causing " \
    << RangedDamage << " points of damage." << std::endl;
    return ;
}

void    ScavTrap::beRepaired(unsigned int amount)
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

void    ScavTrap::takeDamage(unsigned int amount)
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
        std::cout << "FR4G-TP " << Name << " challenges the newcomer by asking " << target << " too " << challenges[attack_number] << std::endl;
    }
    else
    {
        std::cout << "FR4G-TP " << Name << " has " << EnergyPoints << " which isn't enough for an attack" << std::endl;
    }
} 