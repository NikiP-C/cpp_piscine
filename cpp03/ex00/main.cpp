/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 21:16:54 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 21:44:13 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "flagtrap.hpp"

int main(void)
{
    flagtrap BillyBob("BillyBob");

    BillyBob.rangedAttack("Harry");
    BillyBob.takeDamage(13);
    BillyBob.beRepaired(20);
    BillyBob.vaulthunter_dot_exe("Kevin");
    return (0);
}