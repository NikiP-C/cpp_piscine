/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:25:39 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:25:49 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "flagtrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    flagtrap FT_BillyBob("BillyBob");
    ScavTrap ST_HiddyHoo("HiddyHoo");
    NinjaTrap NT_QuickStreak("Quick Streak");
    NinjaTrap NT_Samuel("Samuel");
    SuperTrap SU_Louie("Louie");

    std::cout << std::endl << std::endl;

    FT_BillyBob.rangedAttack("Harry");
    FT_BillyBob.takeDamage(13);
    FT_BillyBob.beRepaired(20);
    FT_BillyBob.vaulthunter_dot_exe("Kevin");

    std::cout << std::endl << std::endl;

    ST_HiddyHoo.rangedAttack("Peeeeeet");
    ST_HiddyHoo.takeDamage(13);
    ST_HiddyHoo.beRepaired(20);
    ST_HiddyHoo.challengeNewcomer("Laura");

    std::cout << std::endl << std::endl;

    NT_QuickStreak.rangedAttack("Oliver");
    NT_QuickStreak.takeDamage(24);
    NT_QuickStreak.ninjaShoebox(NT_Samuel);
    NT_QuickStreak.ninjaShoebox(FT_BillyBob);
    NT_QuickStreak.ninjaShoebox(ST_HiddyHoo);
    
    std::cout << std::endl << std::endl;

    SU_Louie.rangedAttack("Callie");
    SU_Louie.meleeAttack("Tommy");
    SU_Louie.takeDamage(30);
    SU_Louie.ninjaShoebox(FT_BillyBob);
    SU_Louie.vaulthunter_dot_exe("Jordan");

    return (0);
}