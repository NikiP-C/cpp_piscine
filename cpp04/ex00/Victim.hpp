/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:04:45 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:37:41 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
protected:
    std::string Name;
public:
    Victim();
    Victim(std::string VName);
    Victim(Victim &copy);
    Victim &operator=(const Victim &nw);
    ~Victim();

    std::string getName(void);
    virtual void    getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &o, Victim &ip);

#endif