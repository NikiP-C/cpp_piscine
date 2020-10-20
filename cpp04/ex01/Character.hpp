/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 17:30:42 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:26:34 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    std::string Name;
    int         AP;
    AWeapon     *Weapon;
    Character();
public:
    Character(std::string const & name);
    ~Character();
    Character(Character &copy);
    Character &operator=(Character &nw);
    void    recoverAP();
    void    equip(AWeapon* weapon);
    void    attack(Enemy *enemy);
    std::string getName() const;
    int     getAP();
    AWeapon *getWeapon();
    std::string getWeaponName();
};

std::ostream &operator<<(std::ostream &o, Character &ip);

#endif