/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 16:04:45 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/08/07 16:13:44 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *Pbrain = &brain;
    std::string& Rbrain = brain;

    std::cout << *Pbrain << std::endl;
    std::cout << Rbrain << std::endl; 
}