/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: niki <niki@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 14:38:39 by niki          #+#    #+#                 */
/*   Updated: 2020/09/17 15:36:52 by niki          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	~Weapon();
	const std::string	getType();
	void				setType(const std::string);
};
