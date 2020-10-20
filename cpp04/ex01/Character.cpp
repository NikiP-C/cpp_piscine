/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/13 17:30:44 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:29:57 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : Name(name)
{
    this->AP = 40;
    this->Weapon = NULL;
}

Character::~Character()
{
}

Character::Character(Character &copy)
{
    *this = copy;
}
Character &Character::operator=(Character &nw)
{
    this->AP = nw.getAP();
    this->Weapon = nw.getWeapon();
    this->Name = nw.getName();
    return(*this);
}

void    Character::recoverAP()
{
    this->AP += 10;
    if (this->AP > 40)
        this->AP = 40;
}

void    Character::equip(AWeapon *weapon)
{
    this->Weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
    if (this->Weapon != NULL && this->AP > this->Weapon->getAPCost())
    {
        std::cout << this->Name << " attacts " << enemy->getType() \
            << " with a " << this->Weapon->getName() << std::endl;
        this->Weapon->attack();
        enemy->takeDamage(this->Weapon->getDamage());
        if (enemy->getHP() <= 0)
        {
            delete(enemy);      
        }
        this->AP -= this->Weapon->getAPCost();
    }
}

std::string Character::getName() const
{
    return (this->Name);
}

int     Character::getAP()
{
    return(this->AP);
}
AWeapon *Character::getWeapon()
{
    return(this->Weapon);
}

std::string Character::getWeaponName()
{
    return (this->Weapon->getName());
}

std::ostream &operator<<(std::ostream &o, Character &ch)
{
    if (ch.getWeapon() == NULL)
    {
        o <<  ch.getName() << " has " << ch.getAP() << \
            " AP and is unarmed" << std::endl;
    }
    else
    {
        o <<  ch.getName() << " has " << ch.getAP() << " AP and wields a " \
            << ch.getWeaponName() << std::endl;
    }
    return (o);
}