/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 15:57:56 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 17:33:34 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

fixed::fixed()
{
    this->fixed_point_value = 0;
    return ;
}
fixed::fixed(const fixed & copy)
{
    this->fixed_point_value = copy.getRawBits();
    return ;
}

fixed::~fixed()
{
}

int     fixed::getRawBits(void) const
{
    return(this->fixed_point_value);
}

void    fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}

fixed   &fixed::operator=(fixed const *new_val)
{
    this->fixed_point_value = new_val->getRawBits;
}

