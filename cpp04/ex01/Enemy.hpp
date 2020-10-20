/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 17:19:20 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/13 21:43:38 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
private:
    int         hitPoints;
    std::string Type;
public:
    Enemy();
    Enemy(int hp, std::string const type);
    Enemy(Enemy &nw);
    virtual ~Enemy();

    Enemy &operator=(const Enemy & o);
    int getHP() const;
    std::string const getType() const;

    virtual void takeDamage(int);
};

#endif