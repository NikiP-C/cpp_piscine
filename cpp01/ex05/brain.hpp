/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 10:51:50 by niki          #+#    #+#                 */
/*   Updated: 2020/09/15 15:44:34 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>

class brain
{
	private:
    	int			memory_capacity;
   		std::string	dream;

	public:
		brain();
		~brain();
    	std::string identify();
};

