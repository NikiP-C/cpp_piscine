/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 10:46:06 by niki          #+#    #+#                 */
/*   Updated: 2020/09/14 14:46:08 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <brain.hpp>

brain::brain()
{

}

brain::~brain()
{

}

std::string brain::identify()
{
    std::string 		memory_address;
	std::stringstream	int_str;

	int_str << std::hex << (int)this;
	memory_address = int_str.str();
	std::cout << memory_address << std::endl;
}