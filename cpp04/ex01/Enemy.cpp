/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 17:19:19 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:42:59 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const type) : hitPoints(hp), Type(type)
{
    return;
}

Enemy::Enemy(Enemy &nw)
{
    *this = nw;
}
Enemy::~Enemy()
{
}

Enemy &Enemy::operator=(const Enemy & o)
{
    this->hitPoints = o.hitPoints;
    this->Type = o.Type;
    return (*this);
}

int Enemy::getHP() const
{
    return(this->hitPoints);
}

std::string const Enemy::getType() const
{
    return (this->Type);
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
    {
        this->hitPoints -= damage;
    }
}


