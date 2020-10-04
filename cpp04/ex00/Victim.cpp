/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:04:46 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:39:03 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string VName) : Name(VName)
{
    std::cout << "Some random victim called " << this->Name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->Name << " just died for no apparent reason!"<< std::endl;
}

Victim::Victim(Victim &copy)
{
    *this = copy;
}
Victim &Victim::operator=(const Victim &nw)
{
    this->Name = nw.Name;
    return (*this);
}

std::string Victim::getName(void)
{
    return(this->Name);
}

std::ostream &operator<<(std::ostream &o, Victim &ip)
{
    o << "I'm " << ip.getName() << " and I like otters!" << std::endl;
    return (o);
}

void Victim::getPolymorphed(void) const
{
    std::cout << this->Name << " has been turned into a cute little sheep!" << std::endl; 
}