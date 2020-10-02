/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 21:16:54 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 22:08:58 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "flagtrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    flagtrap BillyBob("BillyBob");
    ScavTrap HiddyHoo("HiddyHoo");

    BillyBob.rangedAttack("Harry");
    BillyBob.takeDamage(13);
    BillyBob.beRepaired(20);
    BillyBob.vaulthunter_dot_exe("Kevin");

    HiddyHoo.rangedAttack("Peeeeeet");
    HiddyHoo.takeDamage(13);
    HiddyHoo.beRepaired(20);
    HiddyHoo.challengeNewcomer("Laura");
    return (0);
}