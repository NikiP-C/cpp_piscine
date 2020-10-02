/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 21:16:54 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 18:24:50 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "flagtrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    flagtrap BillyBob("BillyBob");
    ScavTrap HiddyHoo("HiddyHoo");
    NinjaTrap QuickStreak("Quick Streak");
    NinjaTrap Samuel("Samuel");

    std::cout << std::endl << std::endl;

    BillyBob.rangedAttack("Harry");
    BillyBob.takeDamage(13);
    BillyBob.beRepaired(20);
    BillyBob.vaulthunter_dot_exe("Kevin");

    std::cout << std::endl << std::endl;

    HiddyHoo.rangedAttack("Peeeeeet");
    HiddyHoo.takeDamage(13);
    HiddyHoo.beRepaired(20);
    HiddyHoo.challengeNewcomer("Laura");

    std::cout << std::endl << std::endl;

    QuickStreak.rangedAttack("Oliver");
    QuickStreak.takeDamage(24);
    QuickStreak.ninjaShoebox(Samuel);
    QuickStreak.ninjaShoebox(BillyBob);
    QuickStreak.ninjaShoebox(HiddyHoo);

    std::cout << std::endl << std::endl;

    return (0);
}