/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 15:37:52 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 17:45:39 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string NewName) : ClapTrap(NewName)
{
   HitPoints = 60;
   MaxHitPoints = 60;
   EnergyPoints = 120;
   MaxEnergyPoints = 120;
   MeleeDamage = 60;
   RangedDamage = 5;
   ArmorReduction = 0;

   std::cout << "NINJA-TP fucionality was added - Recompiling my combat code!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &old) : ClapTrap(old)
{
    *this = old;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJA-TP " << Name << " - was destroyed Unce! Unce! I think I lost the beat..." << std::endl;
    return ;
}

void    NinjaTrap::ninjaShoebox(flagtrap& ft)
{
    std::cout << "Hello FL4G-TP " << ft.getName() << " , are you ready to be destroyed!" << std::endl;
}
void    NinjaTrap::ninjaShoebox(ScavTrap& st)
{
    std::cout << "SCAV-TP " << st.getName() << " you might be standing by the door, but soon I will be on the otherside of it!" << std::endl;
}
void    NinjaTrap::ninjaShoebox(NinjaTrap& nt)
{
    std::cout << "My dearest fellow Ninja " << nt.getName() << " , this will be a fight for the history books, or really webpages because who used books anymore" << std::endl;
}