/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 20:39:49 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/08/03 20:57:03 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string pick_type()
{
    ZombieEvent ZomEv;
    std::string types[10] = {"Happy", "Angry", "Sad", "Disgusted", \
        "Bored", "Loving", "Silly", "Scared", "Angry", "Confused"};

    int i = rand() % 10;
    return (types[i]);
}