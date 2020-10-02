/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:14:30 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/01 20:25:36 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <iostream>

int main(void)
{
    fixed flt(5.7f);
    fixed nt(7);
    fixed zero;
    
    std::cout << flt.toFloat() << std::endl;
    std::cout << nt.toInt() << std::endl;
    std::cout << zero.toInt() << std::endl;
    std::cout << zero.toFloat() << std::endl;
}