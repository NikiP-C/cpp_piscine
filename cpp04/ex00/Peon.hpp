/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:21:17 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 20:37:59 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
public:
    Peon();
    Peon(std::string PName);
    Peon(Peon &copy);
    Peon &operator=(const Peon &nw);
    ~Peon();

    void    getPolymorphed(void) const;
};

#endif