/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 19:21:57 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:35:18 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string SName, std::string STitle): Name(SName), Title(STitle)
{
    std::cout << this->Name << ", " << this->Title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->Name << ", " << this->Title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer &copy)
{
    *this = copy;
}
Sorcerer &Sorcerer::operator=(const Sorcerer &nw)
{
    this->Name = nw.Name;
    this->Title = nw.Title;
    return (*this);
}
std::string Sorcerer::getName(void) const
{
    return(this->Name);
}

std::string Sorcerer::getTitle(void) const
{
    return(this->Title);
}

std::ostream &operator<<(std::ostream &o, Sorcerer &ip)
{
    o << "I am " << ip.getName() << ", " << ip.getTitle() << ", and I like ponies!" << std::endl;
    return (o);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}