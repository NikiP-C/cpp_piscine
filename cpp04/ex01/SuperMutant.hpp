/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 18:38:58 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 17:30:10 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : Enemy
{
private:
    int         hitPoints;
    std::string Type;
public:
    SuperMutant();
    SuperMutant(SuperMutant &nw);
    virtual ~SuperMutant();

    SuperMutant &operator=(SuperMutant & o);

    void takeDamage(int damage);
};

#endif
