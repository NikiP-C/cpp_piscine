/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 20:30:38 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 18:39:01 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
    ScavTrap(std::string NewName);
    ScavTrap(ScavTrap & old);
    ~ScavTrap();

    void    challengeNewcomer(std::string const & target);
};

#endif