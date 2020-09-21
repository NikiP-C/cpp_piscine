/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 14:16:23 by niki          #+#    #+#                 */
/*   Updated: 2020/09/15 15:47:24 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "human.hpp"

Human::Human()
{

}
Human::~Human()
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
