/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:25:55 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:30:52 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"

int main()
{
Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
Peon joe("Joe");
std::cout << robert << jim << joe;
robert.polymorph(jim);
robert.polymorph(joe);
return 0;
}