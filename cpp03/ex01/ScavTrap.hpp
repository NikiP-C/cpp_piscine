/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:38 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 22:06:26 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScavTrap
{
private:
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
    ScavTrap(std::string NewName);
    ~ScavTrap();
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const & target);
};
