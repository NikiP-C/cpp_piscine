/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 18:25:07 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 21:07:34 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "flagtrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : flagtrap, NinjaTrap
{
private:

public:
    SuperTrap();
    SuperTrap(std::string NewName);
    ~SuperTrap();
};

#endif

