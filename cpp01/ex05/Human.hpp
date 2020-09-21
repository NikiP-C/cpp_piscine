/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/14 12:09:38 by niki          #+#    #+#                 */
/*   Updated: 2020/09/15 15:46:47 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "brain.hpp"
class Human
{
	private:
		brain	human_brain;
	public:
		Human();
		~Human();
		std::string	identify();
};
