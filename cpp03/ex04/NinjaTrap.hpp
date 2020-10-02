/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nphilipp <nphilipp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/02 15:37:50 by nphilipp      #+#    #+#                 */
/*   Updated: 2020/10/02 21:17:50 by nphilipp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP
# define _NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "flagtrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : virtual public ClapTrap
{
private:

public:
    NinjaTrap();
    NinjaTrap(std::string NewName);
    NinjaTrap(NinjaTrap & old);
    ~NinjaTrap();
    
    void    ninjaShoebox(flagtrap& ft);
    void    ninjaShoebox(ScavTrap& st);
    void    ninjaShoebox(NinjaTrap& nt);
};

#endif