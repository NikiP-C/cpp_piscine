/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/04 20:43:26 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/04 21:07:19 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AWeapon
{
private:
    std::string Name;
    int         APCost;
    int         Damage;
public:
    AWeapon();
    AWeapon(std::string const & Name, int apcost, int damage);
    AWeapon(AWeapon &copy);
    ~AWeapon();

    AWeapon &operator=(const AWeapon &nw);
    std::string getName() const;
    int         getAPCost() const;
    int         getDamage() const;
    virtual void attack() const = 0;
};
