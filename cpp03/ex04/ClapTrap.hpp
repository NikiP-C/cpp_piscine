/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 14:08:34 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 16:10:43 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

#include <iostream>

class ClapTrap
{
protected:
    int         HitPoints;
    int         MaxHitPoints;
    int         EnergyPoints;
    int         MaxEnergyPoints;
    int         Level;
    std::string Name;
    int         MeleeDamage;
    int         RangedDamage;
    int         ArmorReduction;
public:
    ClapTrap();
    ClapTrap(std::string NewName);
    ClapTrap(ClapTrap &old);
    ~ClapTrap();

    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    std::string getName();

};

#endif