/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 19:30:16 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:30:41 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string Name;
    std::string Title;
public:
    Sorcerer();
    Sorcerer(std::string SName, std::string STitle);
    Sorcerer(Sorcerer &copy);
    Sorcerer &operator=(const Sorcerer &nw);
    ~Sorcerer();

    std::string getName(void) const;
    std::string getTitle(void) const;
    void    polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer &ip);

#endif