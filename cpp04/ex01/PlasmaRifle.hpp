/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 15:44:36 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:41:00 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
private:
    std::string Name;
    int         APCost;
    int         Damage;
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle &copy);
    ~PlasmaRifle();

    PlasmaRifle &operator=(const PlasmaRifle &nw);
    void attack() const;
};

#endif