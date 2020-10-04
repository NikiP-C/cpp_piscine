/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:20:08 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:39:20 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string PName) : Victim(PName)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..."<< std::endl;
}

Peon::Peon(Peon &copy) : Victim(copy)
{
    *this = copy;
}

Peon &Peon::operator=(const Peon &nw)
{
    this->Name = nw.Name;
    return (*this);
}

void Peon::getPolymorphed(void) const
{
    std::cout << this->Name << " has been turned into a pink pony!" << std::endl; 
}