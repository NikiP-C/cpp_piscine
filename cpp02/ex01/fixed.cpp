/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 15:57:56 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 20:20:50 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <cmath>

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
fixed::fixed(const int value)
{
    this->fixed_point_value = value * (1 << this->fractional_bits);
}
fixed::fixed(const float value)
{
    this->fixed_point_value = value * (1 << this->fractional_bits);
}

fixed::~fixed()
{
}

int     fixed::getRawBits(void) const
{
    return(this->fixed_point_value);
}

fixed   &fixed::operator=(fixed const *new_val)
{
    this->fixed_point_value = new_val->getRawBits();
    return (*this);
}

void    fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}

float   fixed::toFloat(void)
{
    return ((float)(this->fixed_point_value / (float)(1 << this->fractional_bits)));
}

int     fixed::toInt(void)
{
    return (roundf(this->toFloat()));
}