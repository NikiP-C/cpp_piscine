/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flagtrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:38 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 21:53:14 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class flagtrap
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
    flagtrap(std::string NewName);
    ~flagtrap();
    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const & target);
};
