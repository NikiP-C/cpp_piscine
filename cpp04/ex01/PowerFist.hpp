/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 16:49:37 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:41:07 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
    std::string Name;
    int         APCost;
    int         Damage;
public:
    PowerFist();
    PowerFist(PowerFist &copy);
    ~PowerFist();

    PowerFist &operator=(const PowerFist &nw);
    void     attack() const;
};

#endif
